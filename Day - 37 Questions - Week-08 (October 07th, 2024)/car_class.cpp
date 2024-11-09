#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;
    int speed;
public:
    Car(string b, string m, int y) {
        this -> brand = b;
        this -> model = m;
        this -> year = y;
    }
    
    string getBrand() const {
        return this -> brand;
    }
    string getModel() const {
        return this -> model;
    }
    int getYear() const {
        return this -> year;
    }
    int getSpeed() const {
        return this -> speed;
    }
    
    void setSpeed(int s) {
        this -> speed = s;
    }
    
    void increaseSpeed(int amount) {
        this -> speed += amount;
    }
    void decreaseSpeed(int amount) {
        if (this -> speed <= amount) {
            this -> speed = 0;
            return;
        }
        this -> speed -= amount;
    }
};

int main() {
    string b, m;
    int y, s;
    cout << "Enter brand: ";
    getline(cin, b);
    cout << "Enter Model: ";
    getline(cin, m);
    cout << "Enter Year: ";
    cin >> y;
    Car car(b, m, y);
    
    cout << "Enter speed: ";
    cin >> s;
    car.setSpeed(s);
    cout << car.getBrand() << " travels with " << car.getSpeed() << " kmph" << endl;
    
    cout << "Enter speed to increase: ";
    cin >> s;
    car.increaseSpeed(s);
    cout << "After increase, " << car.getBrand() << " travels with " << car.getSpeed() << " kmph" << endl;
    
    cout << "Enter speed to decrease: ";
    cin >> s;
    car.decreaseSpeed(s);
    cout << "After decrease, " << car.getBrand() << " travels with " << car.getSpeed() << " kmph" << endl;

    return 0;
}

/*
    Ques 1. You are building a Car class in C++ that simulates a simple car system. The class should encapsulate the following attributes:

    brand (string): The car's brand name.
    model (string): The car's model name.
    year (int): The manufacturing year of the car.
    speed (int): The current speed of the car.
    The class should provide:
    
    A constructor to initialize the brand, model, and year.
    Getters for all attributes.
    Setters for speed only (you should not allow external modification of the brand, model, or year).
    A method to increaseSpeed(int amount) that increases the current speed by a given amount.
    A method to decreaseSpeed(int amount) that decreases the current speed, but the speed should never go below 0.
    Task:
    
    Implement the Car class with proper encapsulation.
    Create a main function where you create an object of the Car class, modify its speed using the provided methods, and print the car's details after each speed change.
*/
