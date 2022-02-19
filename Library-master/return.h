#ifndef RETURN_H_
#define RETURN_H_
#include <iostream>
#include <fstream>
#include "patronAction.h"

using namespace std;



class Return : public PatronAction {
// << operator prints class data to output stream
friend ostream & operator<<(ostream &, const Return &);

public:
  // Constructor
  Return();

  // Destructor
  virtual ~Return();

  // Returns an instance of PatronAction that is a Return object
  virtual PatronAction* create() const;

  // Sets the data for the member variables
  virtual bool setData(Library*, ifstream&);

  //Displays the return
  virtual void display() const;
  
  // Performs the return action
  virtual bool execute();

private:
  char itemType;
  Item* tempItem;
};
#endif