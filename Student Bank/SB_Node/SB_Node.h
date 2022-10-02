#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class SB_Node
{
    public:
        SB_Node * left;
        SB_Node * right;

        string name;
        string address;
        string phone;
        string email;
        int accountNumber;
        double balance;
        string password;
        int pin;

        SB_Node();
        SB_Node(string name, string address, string phone, string email, int accountNumber, double balance, string password, int pin);

};