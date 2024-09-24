#include <iostream>
#include <fstream>
using namespace std;

// Ques 1: Write a C++ program that take txt file input and write your details inside that file through c++ and then print this details.

int main() {
    ofstream outputFile;
    outputFile.open("input.txt");
    string name, reg_no, grade;
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Reg. No.: ";
    getline(cin, reg_no);
    cout << "Enter Grade: ";
    cin >> grade;

    outputFile << "Name: " << name << endl;
    outputFile << "Reg. No.: " << reg_no << endl;
    outputFile << "Grade: " << grade << endl;
    outputFile.close();

    ifstream inputFile;
    inputFile.open("input.txt");
    string line;
    while(getline(inputFile, line)) {
        cout << line << endl;
    }
    inputFile.close();

    return 0;
}
