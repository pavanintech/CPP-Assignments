#include <iostream>
#include <sstream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data) {
        this -> data = data;
        this -> next = nullptr;
    }
};

Node* sortedInsert(Node* head, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr) {
        return newNode;
    }
    if (head -> data >= data) {
        newNode -> next = head;
        return newNode;
    }
    Node* current = head;
    while (current -> next != nullptr && current -> next -> data < data) {
        current = current -> next;
    }
    newNode -> next = current -> next;
    current -> next = newNode;
    return head;
}

void displayList(Node* head) {
    while (head != nullptr) {
        cout << head -> data;
        if (head -> next != nullptr) cout << " -> ";
        head = head -> next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    string line;
    cout << "Enter Linked List Values: " << endl;
    getline(cin, line);
    int data;
    cout << "Enter Data to be Inserted: " << endl;
    cin >> data;
    string num;
    stringstream ss(line);
    while (ss >> num) {
        head = sortedInsert(head, stoi(num));
    }
    cout << "The Original Sorted List: " << endl;
    displayList(head);
    head = sortedInsert(head, data);
    cout << "The Modified Sorted List: " << endl;
    displayList(head);
    return 0;
}
