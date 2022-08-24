/***********************************************
 Moksh Shah
 08/28/2022
 Language: C++
 ***********************************************/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string studentName;
int studentID;
static int studentGrade;
string studentMajor;
int creditEarned;
int creditRequired;



int main() {

    return 0;
}


void StudentClasses(string classes, int courseID, string courseLetters, int creditHours, int hallNum, string hallName)
{
    string Class = classes;
    int courseID = courseID;
    string courseLetters = courseLetters;
    int creditHours = creditHours;
    int hallNum = hallNum;
    string hallName = hallName;


    //create a file
    ofstream outFile;
    outFile.open("Classes.txt");
    outFile << Class << endl;
    outFile << courseLetters << " " << courseID << " : " <<  creditHours << endl;
    outFile << hallNum << " " << hallName << endl;
    outFile << endl;
    outFile.close();


}