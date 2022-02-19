#ifndef CHILDREN_H_
#define CHILDREN_H_
#include "book.h"
#include <fstream>

class Children : public Book {
public:
    Children();
    ~Children();
    void setData(std::string);

    string getAuthor() const;
    
    // display info about teh book along with the number of copies.
    void display(std::string, std::string);


    bool operator<(const Children&) const;

    //checks if two books are equal. 
    bool operator==(const Children&) const;
    virtual Item* create() const;
    friend std::ostream& operator<<(std::ostream&, Children&);

private:
    string author_;

};
#endif