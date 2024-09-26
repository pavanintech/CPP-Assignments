#include <iostream>
#include <sstream>
using namespace std;

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
            return 0;
        }
        int x = stack[top];
        top--;
        cout << x << " is popped from stack." << endl;
        return 1;
    }
};

int main() {
    arrayStack stack;
    cout << "Enter elements: ";
    string line;
    getline(cin, line);
    stringstream ss(line);
    int num;
    while (ss >> num) {
        stack.push(num);
    }
    
    while (stack.pop()) {}
    
    return 0;
}
