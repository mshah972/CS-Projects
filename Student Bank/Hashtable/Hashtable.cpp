#include "Hashtable.h"

Hashtable::Hashtable()
{
    start = NULL;
}

void Hashtable::startHast()
{
    for(int i = 0; i < 12; i++)
    {
        Node * temp = new Node(i);

        if(start == NULL)
        {
            start = temp;
        }
        else
        {
            Node * temp2 = start;
            while(temp2->next != NULL)
            {
                temp2 = temp2->next;
            }
            temp2->next = temp;
        }
    }
    loadHast();
}

void Hashtable::loadHast()
{
    int accountNumber;
    string password;
    int temp;

    ifstream file;
    file.open("hashtable.txt");
    while(!file.eof())
    {
        file >> accountNumber;
        file >> password;

        if(match(accountNumber, password)
        {
            continue;
        }

        if(accountNumber != -858993460 && password != "password")
        {
            temp = accountNumber % 10;

            Node * c = start;
            while(c -> data != temp)
            {
                c = c -> next;
            }

            Node_1 * temp1 = new Node_1(accountNumber, password);
            if(c -> start == NULL)
            {
                c -> pre = temp1;
            }
            else
            {
                Node_1 * temp2 = c -> start;
                while(temp2 -> next != NULL)
                {
                    temp2 = temp2 -> next;
                }
                temp2 -> next = temp1;
            }
        }
    }
}

void Hashtable::add(int accountNumber, string password)
{
    static int i = 0;

    ofstream file;
    file.open("hashtable.txt", ios::app);
    if(i != 0)
    {
        file << endl;
        file << accountNumber << endl << password;
    }
    else
    {
        i++;
        file << accountNumber << endl << password;
    }
    file.close();

    startHast();
}

bool Hashtable::match(int accountNumber, string password)
{
    bool match = false;
    int r = accountNumber % 10;
    Node * temp = start;

    while(temp->data != r)
    {
        temp = temp->next;
    }

    Node_1 * temp2 = temp->per;

    while(temp2 != NULL)
    {
        if(temp2->accountNumber == accountNumber && temp2->password == password)
        {
            match = true;
            break;
        }
        temp2 = temp2->next;
    }

    return match;
}

void Hashtable::print()
{
    Node * current = start;
    while (current != NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
}

void Hashtable::printPasswords()
{
    Node * temp = start;
    while (temp != NULL)
    {
        Node_1 * temp1 = temp->pre;
        while (temp1 != NULL)
        {
            cout << temp1->accountNumber << " " << temp1->password << endl;
            temp1 = temp1->next;
        }
        temp = temp->next;
    }
}

void Hashtable::delete_account(int accountNumber)
{
    int index = accountNumber % 10;
    Node * temp = start;
    for (int i = 0; i < index; i++)
    {
        temp = temp->next;
    }
    Node_1 * temp1 = temp->pre;
    if (temp1->accountNumber == accountNumber)
    {
        temp->pre = temp1->next;
        delete temp1;
    }
    else
    {
        while (temp1->next->accountNumber != accountNumber)
        {
            temp1 = temp1->next;
        }
        Node_1 * temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }
}

