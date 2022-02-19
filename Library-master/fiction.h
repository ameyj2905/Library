
#ifndef FICTION_H_
#define FICTION_H_
#include <iostream>
#include <fstream>
#include "book.h"


using namespace std;


class Fiction : public Book {

public:
  // Default constructor
  Fiction();

  // Destructor
  virtual ~Fiction();

  // Creates an Item :fiction book
  virtual Item* create() const;

  // Sets the data for the book
  virtual void setData(ifstream&);

  //Displays the book details 
  virtual void display() const;

  
  // Comparison operators
  virtual bool operator==(const NodeData &) const;
  virtual bool operator<(const NodeData &) const;

private: 
  string author;  // the author of the book
};

#endif