#include <iostream>
using namespace std;

// Ques 1: Write C++ program that create a stack using Array.

#define MAX 1000

class arrayStack {
    public:
    int* stack, top;
    arrayStack() {
        this -> stack = new int[MAX];
        this -> top = -1;
    }
    void push(int data) {
        if (top == MAX-1) {
            cout << "Stack Overflow" << endl;
            return;
        }
        stack[++top] = data;
        cout << data << " is pushed into stack." << endl;
    }
    int pop() {
        if (top < 0) {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int x = stack[top];
        top--;
        return x;
    }
};

int main() {
    arrayStack stack;
    stack.push(4);
    stack.push(16);
    stack.push(256);
    
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    cout << stack.pop() << endl;
    return 0;
}
