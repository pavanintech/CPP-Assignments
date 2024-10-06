#include <iostream>
using namespace std;

// Ques 2. Implement the stack using linkedlist.

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this -> data = data;
    }
};

class LLStack {
    public:
    Node* top;
    LLStack () {
        this -> top = nullptr;
    }
    void push (int data) {
        Node* newNode = new Node(data);
        newNode -> next = top;
        cout << data << " Pushed." << endl;
        top = newNode;
    }
    void pop () {
        if (this -> top == nullptr) {
            cout << "STACK UNDERFLOW!!" << endl;
            return;
        }
        Node* temp = top;
        top = top -> next;
        cout << temp -> data << " Popped!!" << endl;
        delete temp;
    } 
};

int main() {
    LLStack stk;
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    return 0;
}
