#ifndef PATRON_H_
#define PATRON_H_
#include <fstream>
#include "book.h"
#include "command.h"

class PatronAction;

class Patron {
public:
    Patron(std::string, std::string, int);
    Patron();
    virtual ~Patron();
    void displayHistory();

    // Adds teh command to the patron's history. 
    void addCommand(PatronAction*);
    
    friend std::ostream& operator<<(std::ostream&, Patron&);
    void setData(ifstream&);
    int getPatronId();
    string getName();

    vector<PatonAction*> getHistory() const;
    
    
    
private:
    vector<PatronAction*> history; // list for patron's past action.
    int patronId;
    string patronName;

};
#endif
