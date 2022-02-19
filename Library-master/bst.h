#pragma once
#include <stack>

template<class T>
struct TreeNode{
    T* val;
    TreeNode* left = nullptr;
    TreeNode* right = nullptr;
    TreeNode(const T* val) : val(val) {}
};

template<class T>
class Bst {
public:
    Bst();
    ~Bst();
    bool retrieve(const T&, TreeNode<T>*&) const;
    bool insert(const T*);
    void destruct();

    template<class U>
    friend std::ostream& operator<<(std::ostream&, const Bst<U>&);

private:
    TreeNode<T>* root_ = nullptr;
    int size_ = 0;

    void destruct(TreeNode<T>*);
    bool insert(TreeNode<T>*, const T*);
};

template<class T>
Bst<T>::Bst() {}

template<class T>
Bst<T>::~Bst(){
    if(root_){
        destruct(root_);
    }
}

template<class T>
void Bst<T>::destruct(TreeNode<T>* node){
    if(!node){
        return;
    }
    destruct(node->left);
    destruct(node->right);
    delete node->val;
    delete node;
    size_ = 0;
}

template<class T>
bool Bst<T>::insert(const T* val) {
    if(!root_) {
        root_ = new TreeNode<T>(val);
        size_++;
        return true;
    }

    return insert(root_, val);
}

template<class T>
bool Bst<T>::insert(TreeNode<T>* node, const T* val) {
    if(*val == *node->val) {
        return false;
    } else if(*val > *node->val && !node->right) {
        node->right = new TreeNode<T>(val);
        size_++;
        return true;
    } else if(*val < *node->val && !node->left) {
        node->left = new TreeNode<T>(val);
        size_++;
        return true;
    } else if(*val > *node->val) {
        return insert(node->right, val);
    } else {
        return insert(node->left, val);
    }
}

template<class T>
bool Bst<T>::retrieve(const T& val, TreeNode<T>*& p_node) const{
    if(!root_){
        return false;
    }

    TreeNode<T>* ptr = root_;
    while(ptr != nullptr && *ptr->val != *val){
        ptr = *val < *ptr->val ? ptr->left : ptr->right;
    }

    if(ptr != nullptr && *ptr->val == *val){
        p_node = ptr;
        return true;
    } else {
        return false;
    }
}

template<class T>
std::ostream& operator<<(std::ostream& stream, const Bst<T>& bst){
    std::stack<TreeNode<T>*> stack;
    TreeNode<T>* node = bst.root_;
    while(node || !stack.empty()){
        while(node){
            stack.push(node);
            node = node->left;
        }
        node = stack.top();
        stack.pop();
        stream << *node->val << " ";
        node = node->right;
    }
    return stream;
}