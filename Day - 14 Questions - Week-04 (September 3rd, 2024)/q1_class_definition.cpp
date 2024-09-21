#include <iostream>
using namespace std;

// Define a car class with properties brand name , model, engine, number of seats and method displayInfo that display the all information of class.

class Car {
    string brand_name;
    string model;
    string engine;
    int seat_count;
    public:
    Car () {
        cout << "Enter Brand Name: ";
        cin >> this -> brand_name;
        cout << "Enter Model Name: ";
        cin >> this -> model;
        cout << "Enter Engine Name: ";
        cin >> this -> engine;
        cout << "Enter Seat Count: ";
        cin >> this -> seat_count;
    }
    void displayInfo();
};

void Car::displayInfo() {
    cout << "Brand Name: " << this -> brand_name << endl;
    cout << "Model: " << this -> model << endl;
    cout << "Engine: " << this -> engine << endl;
    cout << "No of Seats: " << this -> seat_count << endl;
}

int main() {
    Car* car = new Car();
    car -> displayInfo();
    return 0;
}
