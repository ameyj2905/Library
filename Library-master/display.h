#ifndef DISPLAY_H_
#define DISPLAY_H_
#include <iostream>
#include <fstream>
#include "patronAction.h"

using namespace std;
class Display : public PatronAction {

friend ostream & operator<<(ostream &, const Display &);

public:
  // Constructor
  Display();

  // Destructor
  virtual ~Display();

  // Returns an instance PatronAction that is a displayLibrary
  virtual PatronAction* create() const;

  // Sets the data for the member variable
  virtual bool setData(Library *, ifstream&);

  virtual void display() const;
  
  // Prints out the contents of the library
  virtual bool execute();
private:
  
};

#endif