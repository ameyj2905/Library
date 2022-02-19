#include "book.h"

Book::Book() {
    title_ = "<title>";
}

Book::~Book() {}

Book::Book(std::string title) : title_(title) {}

void Book::setTitle(std::string title) {
    title_ = title;
}