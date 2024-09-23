#include <iostream>
#include <tuple>
using namespace std;

// Ques 1: You are tasked with creating a Person class in C++ that stores details of a person, such as firstName, lastName, and age. The class should:

// Have a constructor that takes firstName, lastName, and age as arguments and initializes the member variables.
// Include a method getFullName() that returns the full name of the person (a concatenation of firstName and lastName).
// Add a method getDetails() that returns the firstName, lastName, and age in a tuple.
// Demonstrate the usage of structured bindings to unpack the tuple returned by getDetails().

class Person {
    string firstName;
    string lastName;
    int age;
    public:
    Person(string firstName, string lastName, int age) {
        this -> firstName = firstName;
        this -> lastName = lastName;
        this -> age = age;
    }
    string getFullName() {
        return this -> firstName + " " + this -> lastName;
    }
    tuple<string, string, int> getDetails() {
        return make_tuple(this -> firstName, this -> lastName, this -> age);
    }
};

int main() {
    string firstName, lastName; int age;
    cout << "Enter First Name: ";
    cin >> firstName;
    cout << "Enter Last Name: ";
    cin >> lastName;
    cout << "Enter age: ";
    cin >> age;
    Person person(firstName, lastName, age);
    auto [_firstName, _lastName, _age] = person.getDetails();
    cout << "Details: " << endl;
    cout << "Full Name: " << person.getFullName() << endl;
    cout << "First Name: " << _firstName << endl;
    cout << "Last Name: " << _lastName << endl;
    cout << "Age: " << _age << endl;
    return 0;
}
