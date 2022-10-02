#include "Node_1.h"

Node_1::Node_1()
{
    next = NULL;
    accountNumber = 0;
    password = "";
}

Node_1::Node_1(int accountNumber, string password)
{
    next = NULL;
    accountNumber = accountNumber;
    password = password;
}
