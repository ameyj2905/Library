#include "children.h"
using std::string;

Children::Children() {}

Children::Children(string title, string fn, string ln) : Book(title), author_(fn, ln) {}

void Children::setTitle(string title) {
    title_ = title;
}

void Children::setAuthor(string fn, string ln) {
    author_.setFirstName(fn);
    author_.setLastName(ln);
}

Book* Children::create() const {
    return new Children;
}