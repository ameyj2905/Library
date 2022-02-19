#include "fiction.h"
using std::string;

Fiction::Fiction() {}

Fiction::Fiction(string title, string fn, string ln) : Book(title), author_(fn, ln) {}

void Fiction::setTitle(string title) {
    title_ = title;
}

void Fiction::setAuthor(string fn, string ln) {
    author_.setFirstName(fn);
    author_.setLastName(ln);
}

Book* Fiction::create() const {
    return new Fiction;
}