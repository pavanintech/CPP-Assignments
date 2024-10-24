#include <iostream>
#include <sstream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int d) : data(d), next(nullptr) {}
};

class SinglyLinkedList {
    public:
    Node* head;
    SinglyLinkedList() : head(nullptr) {}
    
    void createList() {
        cout << "Enter Elements: ";
        string line;
        getline(cin, line);
        stringstream ss(line);
        int num;
        ss >> num;
        head = new Node(num);
        Node* current = head;
        
        while (ss >> num) {
            Node* newNode = new Node(num);
            current -> next = newNode;
            current = current -> next;
        }
    }
    
    void segregate() {
        if (!head || !head -> next) {
            return;
        }
        Node* odd = head;
        Node* even = head -> next;
        Node* evenHead = even;
        
        while (even && even -> next) {
            odd -> next = even -> next;
            odd = odd -> next;
            even -> next = odd -> next;
            even = even -> next;
        }
        odd -> next = evenHead;
    }
    
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp -> data;
            if (temp -> next) cout << " -> ";
            temp = temp -> next;
        }
        cout << endl;
    }
};

int main() {
    SinglyLinkedList list;
    list.createList();
    
    list.segregate();
    
    list.display();
    
    return 0;
}
