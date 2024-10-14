#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this -> data = data;
        next = nullptr;
    }
};

class LinkedListQueue {
    Node* front, *rear;
    public:
    LinkedListQueue () {
        front = rear = nullptr;
    }
    void enqueue(int data) {
        Node* newNode = new Node(data);
        if (rear == nullptr) {
            front = rear = newNode;
            return;
        }
        rear -> next = newNode;
        rear = newNode;
    }
    void dequeue() {
        if (front == nullptr) {
            cout << "Queue Underflow\n";
            return;
        }
        Node* temp = front;
        front = front -> next;
        cout << "Dequeued: " << temp -> data << "!\n";
        delete temp;
    }
    int peek() {
        if (front == nullptr) {
            cout << "Queue is Empty" << endl;
            return -1;
        }
        return front -> data;
    }
    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    LinkedListQueue queue;
    queue.enqueue(10);
    queue.enqueue(30);
    queue.enqueue(20);
    queue.enqueue(40);
    
    cout << "Peek: " << queue.peek() << "\n";
    
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    return 0;
}
