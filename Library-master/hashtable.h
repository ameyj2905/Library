#ifndef _HASHTABLE_H
#define _HASHTABLE_H

#include <iostream>

const int MAX_SIZE = 10000;
const int MIN_ID = 0001;
const int MAX_ID = 9999;

class Patron;

class HashTable {
    public:
        // Constructor
        HashTable();

        // Destructor
        virtual ~HashTable();

        // function taht retruns based on hash of the patronId.
        int hash(int) const;

        // returns true, if a patron is successfully added to the table.
        bool add(Patron*);  

        // Gets specific patron from the hashtable.
        Patron* get(int) const; 

        // clears the hashtable.
        void clear();

    private:
        Patron* table[MAX_SIZE]; // array of pointers to patrons
        int size; // num of keys present in table 
};
#endif