#include <iostream>
using namespace std;

// Ques 1 : Write a function void printLinkedList(Node* head) that traverses a singly linked list and prints each element's value. Input: A linked list with elements 10 -> 20 -> 30 -> 40
// Output: 10 20 30 40

class Node {
    public:
    int data;
    Node* next;
    Node (int data = 0) {
        this -> data = data;
        this -> next = nullptr;
    }
};

class LinkedList {
    public:
    Node* head;
    LinkedList() {
        head = nullptr;
    }
    void insert(int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp -> next != nullptr) {
                temp = temp -> next;
            }
            temp -> next = newNode;
        }
    }
    void printLinkedList() {
        Node* current = head;
        while (current != nullptr) {
            cout << current -> data << " ";
            current = current -> next; 
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    for (int i = 10; i <= 40; i += 10) {
        list.insert(i);
    }
    list.printList();
    return 0;
}
