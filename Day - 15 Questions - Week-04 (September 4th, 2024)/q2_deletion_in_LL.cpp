#include <iostream>
#include <sstream>
using namespace std;

// Ques 2: Write a C++ code that take linked list from user input and a value integer . Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this -> data = data;
        this -> next = nullptr;
    }
};

class LinkedList {
    public:
    Node* head;
    LinkedList () {
        head = nullptr;
    }
    void insert_at_end (int data) {
        Node* newNode = new Node(data);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* current = head;
        while (current -> next != nullptr) {
            current = current -> next;
        }
        current -> next = newNode;
    }
    void delete_data (int toDel) {
        if (head == nullptr) {
            cout << "List is Empty!!" << endl;
            cout << "Element can't be deleted." << endl;
            return;
        }
        if (head -> data == toDel) {
            Node* temp = head;
            head = head -> next;
            delete temp;
            return;
        }
        Node* current = head;
        while (current -> next != nullptr && current -> next -> data != toDel) {
            current = current -> next;
        }
        Node *temp = current -> next;
        current -> next = temp -> next;
        delete temp;
    }
    void displayList () {
        Node* current = head;
        while (current != nullptr) {
            cout << current -> data;
            if (current -> next != nullptr) cout << " -> ";
            current = current -> next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;
    int value;
    string num;
    string line;
    cout << "Enter Linked List Values: " << endl;
    getline(cin, line);
    stringstream ss(line);
    while (ss >> num) {
        list.insert_at_end(stoi(num));
    }
    
    cout << "Enter Data to be deleted from linked list: ";
    cin >> value;
    cout << "Before Deletion: " << endl;
    list.displayList();
    list.delete_data(value);
    cout << "After Deletion: " << endl;
    list.displayList();
    
    return 0;
}
