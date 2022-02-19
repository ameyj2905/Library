#ifndef NODEDATA_H
#define NODEDATA_H
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

// simple class containing one string to use for testing
// not necessary to comment further

class NodeData {
   friend ostream & operator<<(ostream &, const NodeData &);

public:
   NodeData(); // default constructor
   virtual ~NodeData();          
   
   // sets class data from data file
   virtual void setData(ifstream&) = 0;                


   virtual bool operator==(const NodeData &) const = 0;

   virtual bool operator<(const NodeData &) const = 0;

   virtual void display() const = 0;

   
private:
   
};

#endif
