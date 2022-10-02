#pragma once

class Node_1
{
    public:
        Node_1 * next;
        int accountNumber;
        string password;

        Node_1();
        Node_1(int accountNumber, string password);
};