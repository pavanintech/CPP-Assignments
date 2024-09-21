#include <iostream>
using namespace std;

// Ques 2: Write a program that defines a Rectangle class with a copy constructor

class Rectangle {
    int length;
    int breadth;
    public:
    Rectangle(int len, int breadth) {
        this -> length = len;
        this -> breadth = breadth;
    }
    Rectangle(const Rectangle &x);
    void displayArea() {
        cout << "Area: " << this -> length * this -> breadth << endl;
    }
};

Rectangle::Rectangle(const Rectangle &x) {
    this -> length = x.length;
    this -> breadth = x.breadth;
    cout << "Copy Constructor is Utilized Here." << endl;
}

int main() {
    Rectangle rect1(4, 6);
    rect1.displayArea();
    Rectangle* rect2 = new Rectangle(rect1);
    rect2 -> displayArea();
    return 0;
}
