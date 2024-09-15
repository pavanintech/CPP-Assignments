#include <iostream>
using namespace std;

// Write a function void insertAtEnd(Node*& head, int data) that inserts a new node with the given data at the end of a singly linked list. nput: A linked list with elements 10 -> 20 -> 30, and a new data 40
// Output: The linked list becomes 10 -> 20 -> 30 -> 40

class Node {
    public:
    int data;
    Node* next;
    Node(int data = 0) {
        this -> data = data;
        this -> next = nullptr;
    }
};

class LinkedList {
    public:
    Node* head;
    LinkedList() {
        this -> head = nullptr;
    }
    void insertAtEnd(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp -> next != nullptr) {
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
    void printLinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.printLinkedList();
    return 0;
}
