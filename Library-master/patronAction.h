#include <iostream>
#include <fstream>
#include "patron.h"
#include "item.h"
#include "hashtable.h"
#include "itemFactory.h"
#include "bst.h"
using namespace std;

class Library;


// PatronAction class represents actions a patron can take.
class PatronAction {
// 
friend ostream & operator<<(ostream &, const PatronAction &);

public:
  // Constructor
  PatronAction();

  // Destructor
  virtual ~PatronAction();

  // Gets the patron associated to the patron
  virtual Patron* getPatron() const;

  // gets the associated item
  virtual Item* getItem() const;

  // Sets the data for the member variables
  virtual bool setData(Library*, ifstream&);

  // operator<< helper
  virtual void display() const ;
  
  // creates the patron action
  virtual PatronAction* create() const;

  // Performs the patron action
  virtual bool perform();

  virtual string getAction() const;

protected:
  Library* lib;
  Patron* Patron;  // the patron associated with the action
  Item* Item;      // the item associated with the action
  string action;         // the type of action
};

#endif