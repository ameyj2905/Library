

#ifndef _ITEM_H
#define _ITEM_H

#include <iostream>
#include <fstream>
#include "nodedata.h"
#include <iomanip>

// Only for class code, OK to use namespace
using namespace std;

//---------------------------------------------------------------------------
// Item class represents the items in a library.
class Item : public NodeData {

public:
  //Creates the Item object
  Item();

  // Destructor
  virtual ~Item();

  // Increases the number by 1
  void increaseCopies();

  // Decreases the number by 1
  void decreaseCopies();

  // Returns the number of copies
  int getNumOfCopiesIn();

  //Returns the number of copies checked out
  int getNumOfCopiesOut();

  // creates an item
  virtual Item* create() ;

  virtual string getBookTitle() ;

  // Sets the data for the member variables
  virtual void setData(ifstream&) ;

  
  virtual void display() ;
  

  virtual bool operator<(const NodeData&) ;

  virtual bool operator==(const NodeData&);

protected:
  int numOfCopies;
  int totalCopies; // number of copies owned by the library
};
#endif