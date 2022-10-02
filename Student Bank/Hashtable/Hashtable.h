#pragma once
#include "Node.h"
#include "Node_1.h"

class Hashtable
{
    public:
        Node * start;
        Hashtable();

        void startHast();
        void loadHast();
        void add(int, string);
        bool match(int, string);
        void print();
        void printPasswords();
        void delete_account(int);
};