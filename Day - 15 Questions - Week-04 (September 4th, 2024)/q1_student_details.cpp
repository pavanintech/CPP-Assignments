#include <iostream>
using namespace std;

// Ques 1: Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.

class Student {
    int reg_no;
    string name;
    int std;
    string branch;
    public:
    Student () {
        cout << "Enter Student Reg No.: ";
        cin >> this -> reg_no;
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, this -> name);
        cout << "Enter Student Standard: ";
        cin >> this -> std;
        cout << "Enter Student Branch: ";
        cin >> this -> branch;
    }
    void displayStudentInfo() {
        cout << "Reg No.: " << this -> reg_no << endl;
        cout << "Student Name: " << this -> name << endl;
        cout << "Student Standard: " << this -> std << endl;
        cout << "Student Branch: " << this -> branch << endl;
    }
};

int main() {
    Student* student = new Student();
    student -> displayStudentInfo();
    return 0;
}
