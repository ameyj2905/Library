#ifndef BOOK_H_
#define BOOK_H_
#include <iostream>

class Book {
public:
    Book();
    virtual ~Book();
    Book(std::string);
    virtual Book* create() const = 0;
    void setTitle(std::string);
    
    string getBookFormat();
    string getBookTitle();
    int getYear();
    void display();
;
    
protected:
    std::string title_;
    int year;  // year of public of the book.
    string bookTitle; // title of the book
    string bookFormat; // hardcover
    string genre; 

};
#endif
