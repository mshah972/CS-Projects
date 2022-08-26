/***********************************************
 Moksh Shah
 08/28/2022
 Language: C++
 ***********************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

string studentName;
int studentID;
static int studentGrade;
string studentMajor;
int creditEarned;
int creditRequired;
int userInput;


void displayMainMenu();
int protectData(string);
void displayStudentMenu();


int main() {

    displayMainMenu();

    return 0;
}


void StudentClasses(string classes, int courseID, string courseLetters, int creditHours, int hallNum, string hallName)
{
    string Class = classes;
    int CourseID = courseID;
    string CourseLetters = courseLetters;
    int CreditHours = creditHours;
    int HallNum = hallNum;
    string HallName = hallName;


    //create a file
    ofstream outFile;
    outFile.open("Classes.txt");
    outFile << Class << endl;
    outFile << courseLetters << " " << courseID << " : " <<  creditHours << endl;
    outFile << hallNum << " " << hallName << endl;
    outFile << endl;
    outFile.close();

}

void displayMainMenu() {

    system("clear");
    
    cout << endl;
    cout << "********************************************************" << endl;
    cout << "*        WELCOME TO STUDENT MANAGEMENT PORTAL          *" << endl;
    cout << "********************************************************" << endl;
    cout << endl;

    cout << endl;
    
    cout << "1. STUDENT LOGIN\n"
        << "2. TEACHER LOGIN\n"
        << "3. ADMIN LOGIN\n"
        << "4. EXIT\n" << endl;

    cout << "\nEnter your choice: ";
    cin >> userInput;
    cout << endl;

    switch (userInput) {
        case 1:
            displayStudentMenu();
            break;
        case 2:
            cout << "TEACHER LOGIN" << endl;
            break;
        case 3:
            cout << "ADMIN LOGIN" << endl;
            break;
        case 4:
            cout << "EXIT" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }

    cout << endl;

}

void displayStudentMenu() {
    
    system("clear");
    cout << endl;
    cout << "********************************************************" << endl;
    cout << "*              WELCOME TO STUDENT PORTAL               *" << endl;
    cout << "********************************************************" << endl;
    cout << endl;

    cout << 

}