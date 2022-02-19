#ifndef PERIODICAL_H_
#define PERIODICAL_H_

#include "book.h"
#include <list>
#include <iostream>
#include <fstream>

class Periodical : public Book {
public:
    Periodical();
    ~Periodical();

    int getMonth() const;
    
    Item* create() const;

    void SetData(ifstream&)

    // displays the book details
    void display() const;
    void setTitle(std::string);

    bool operator<(const Periodical&) const;
    
    bool operator==(const Periodical&) const;

    friend std::ostream& operator<<(std::ostream&, Periodical&);

private:
    int month;

};
#endif