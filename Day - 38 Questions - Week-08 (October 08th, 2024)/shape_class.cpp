#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) {
        this -> radius = r;
    }
    double area() override {
        return M_PI * radius * radius;
    }
    double perimeter() override {
        return 2 * M_PI * radius;
    }
};

class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) {
        this -> width = w;
        this -> height = h;
    }
    double area() override {
        return width * height;
    }
    double perimeter() override {
        return 2 * (width + height);
    }
};

int main() {
    double x, y;
    cout << "Enter radius: ";
    cin >> x;
    
    Circle circle(x);
    Shape* shape = &circle;
    cout << fixed << setprecision(2);
    
    cout << "Circle: " << endl;
    cout << "Area: " << shape -> area() << endl;
    cout << "Perimeter: " << shape -> perimeter() << endl;
    
    cout << "Enter width: ";
    cin >> x;
    cout << "Enter Height: ";
    cin >> y;
    
    Rectangle rect(x, y);
    shape = &rect;
    cout << "Rectangle: ";
    cout << "Area: " << shape -> area() << endl;
    cout << "Perimeter: " << shape -> perimeter() << endl;

    return 0;
}

/*
    Ques 1. You are tasked with designing a Shape system that can handle different types of shapes (e.g., Circle, Rectangle) in C++. The system should use abstraction to define a common interface for all shapes and allow for flexibility in handling various shape types.

    Your task is to:
    
    Create an abstract class named Shape with the following:
    
    A pure virtual method area() that returns the area of the shape.
    A pure virtual method perimeter() that returns the perimeter of the shape.
    Implement two derived classes:
    
    Circle: This class should have a private attribute radius and implement the area() and perimeter() methods.
    Rectangle: This class should have private attributes width and height and implement the area() and perimeter() methods.
    In the main function, create objects of Circle and Rectangle, and print their areas and perimeters using the abstract class interface.
*/
