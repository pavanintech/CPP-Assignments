#include <iostream>
using namespace std;

class Vehicle {
    protected:
    string make;
    int year;
    float fuel;
    public:
    Vehicle(string m, int y, float f) : make(m), year(y), fuel(f) {}
    
    void refuel(float amount) {
        this -> fuel += amount;
    }
    virtual void display() {
        cout << "Make: " << this -> make << endl;
        cout << "Year: " << this -> year << endl;
        cout << "Fuel: " << this -> fuel << endl;
        cout << "---------" << endl;
    }
};

class Car : public Vehicle {
    int doors;
    public:
    Car(string m, int y, float f, int d) : Vehicle(m, y, f) {
        this -> doors = d;
    }
    void display() override {
        cout << "Make: " << this -> make << endl;
        cout << "Year: " << this -> year << endl;
        cout << "Fuel: " << this -> fuel << endl;
        cout << "Doors: " << this -> doors << endl;
        cout << "---------" << endl;
    }
    void openDoors() {
        cout << "Doors are Opened." << endl;
    }
};

class Bike : public Vehicle {
    bool hasCarrier;
    public:
    Bike(string m, int y, float f, bool h) : Vehicle(m, y, f) {
        this -> hasCarrier = h;
    }
    void display() override {
        cout << "Make: " << this -> make << endl;
        cout << "Year: " << this -> year << endl;
        cout << "Fuel: " << this -> fuel << endl;
        cout << "HasCarrier: " << (hasCarrier ? "True" : "False") << endl;
        cout << "---------" << endl;
    }
    void kickStart() {
        cout << "Bike kick-started." << endl;
    }
};

int main() {
    Car car("Ferrari SF90 Stradale", 2019, 10.259, 5);
    Bike bike("Ducati Monster 1200", 2024, 15.426, true);
    
    car.refuel(100);
    bike.refuel(150);
    
    car.display();
    bike.display();
    
    return 0;
}
