#ifndef _ITEM_FACTORY_H
#define _ITEM_FACTORY_H

#include "item.h"
#include "children.h"
#include "fiction.h"
#include "periodical.h"


const int MAX_ITEM_TYPES = 26; 


class ItemFactory {
public:
  // Constructor
  ItemFactory();

  // Destructor
  virtual ~ItemFactory();

  Item* createIt(char, istream &) const;
  
private:
  Item* itemTemplates[MAX_ITEM_TYPES]; 

  
  int hash(char) const; 
};
#endif