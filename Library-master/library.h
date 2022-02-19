#ifndef LIBRARY_H_
#define LIBRARY_H_
#include "children.h"
#include "fiction.h"
#include "periodical.h"
#include "display.h"
#include "return.h"
#include "checkout.h"
#include "cfactory.h"
#include "patron.h"
#include "bst.h"

class Library {
public:
    Library();
    ~Library();
    // Removes item from library database
    bool removeItem(Item&);
   Item* inLibrary(char, Item*&) const;

  // Mass build of library items using datafile
  void buildLibrary(ifstream&);

  // Mass build library patrons using datafile
  void buildPatrons(ifstream&);

  // Performs patron actions
  void performCommands(ifstream&);

  void display() const;

  //gets patron
  Patron* getPatron(int) const;


private:
  Bst itemTypes[];
  HashTable libraryPatrons; // stores all the library patrons
  ItemFactory libraryItemFactory;   // factory to create library items
  char itemType;
  char actionType;
};

#endif