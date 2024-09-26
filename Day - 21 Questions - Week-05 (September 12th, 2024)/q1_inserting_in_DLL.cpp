#include <iostream>
#include <sstream>
using namespace std;

// Ques 1: Write C++ program to create a doubly linkedlist and insert a node at any position . Input Linkedlist: 2<->4<->5 ,p = 2, x = 6 Output: 2 4 5 6, Explanation: p = 2, and x = 6. So, 6 is
// inserted after p, i.e, at position 3
// (0-based indexing).

class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data) {
        this -> data = data;
        this -> next = this -> prev = nullptr;
    }
};

void insert_at_end(Node* &head, Node* &tail, int data) {
    Node* newNode = new Node(data);
    if (head == nullptr || tail == nullptr) {
        head = newNode;
        tail = newNode;
        return;
    }
    Node* current = head;
    while (current -> next != nullptr) {
        current = current -> next;
    }
    current -> next = newNode;
    newNode -> prev = current;
    tail = newNode;
}

void insert_after_pos(Node* &head, Node* &tail, int k, int data) {
    if (k <= 0) {
        cout << "Invalid Position" << endl;
        return;
    }
    Node* newNode = new Node(data);
    Node* current = head;
    int i = 0;
    while (current != nullptr && i != k) {
        current = current -> next;
        i++;
    }
    if (current == nullptr) {
        cout << "Position out of bounds!!" << endl;
        delete newNode;
        return;
    }
    newNode -> next = current -> next;
    newNode -> prev = current;
    if (current -> next == nullptr) {
        current -> next = newNode;
        tail = newNode;
    } else {
        current -> next -> prev = newNode;
        current -> next = newNode;
    }
}

void forwardTraversal(Node* head) {
    cout << "Forward Traversal: " << endl;
    while (head != nullptr) {
        cout << head -> data;
        if (head -> next != nullptr) cout << " -> ";
        head = head -> next;
    }
    cout << endl;
}

void backwardTraversal(Node* tail) {
    cout << "Backward Traversal: " << endl;
    while(tail != nullptr) {
        cout << tail -> data;
        if (tail -> prev != nullptr) cout << " <- ";
        tail = tail -> prev;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    Node* tail = nullptr;
    cout << "Enter Linked List Elements: " << endl;
    string line;
    getline(cin, line);
    stringstream ss(line);
    int num;
    while (ss >> num) {
        insert_at_end(head, tail, num);
    }
    int after_pos, data;
    cout << "Enter Position(After this position Element is Inserted): ";
    cin >> after_pos;
    cout << "Enter Element to be inserted after " << after_pos << ": ";
    cin >> data;
    insert_after_pos(head, tail, after_pos, data);
    forwardTraversal(head);
    backwardTraversal(tail);
    return 0;
}
