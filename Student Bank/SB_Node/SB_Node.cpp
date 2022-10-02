#include "SB_Node.h"
using namespace std;

SB_Node::SB_Node()
{
    left = NULL;
    right = NULL;
    name = "";
    address = "";
    phone = "";
    email = "";
    accountNumber = 0;
    balance = 0;
    password = "";
    pin = 0;
}

SB_Node::SB_Node(string name, string address, string phone, string email, int accountNumber, double balance, string password, int pin)
{
    left = NULL;
    right = NULL;
    this->name = name;
    this->address = address;
    this->phone = phone;
    this->email = email;
    this->accountNumber = accountNumber;
    this->balance = balance;
    this->password = password;
    this->pin = pin;
}

