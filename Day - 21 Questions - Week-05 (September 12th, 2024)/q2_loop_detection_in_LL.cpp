#include <iostream>
using namespace std;

// Ques 2: Write C++ program that detect the cycle inside a given linkedlist if their is any cycle present
// then print true otherwise print false. Input: head = [3,2,0,-4], pos = 1. Output: true. 
// Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

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

bool detect_loop_in_LL(Node* head) {
    Node* slow = head;
    Node* fast = head;
    while (fast -> next -> next != nullptr && fast -> next != nullptr) {
        slow = slow -> next;
        fast = fast -> next -> next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

int main() {
    Node* head1 = nullptr;
    Node* first1 = new Node(10);
    Node* second1 = new Node(20);
    Node* third1 = new Node(30);
    Node* fourth1 = new Node(40);
    Node* fifth1 = new Node(50);
    Node* sixth1 = new Node(60);
    head1 = first1;
    head1 -> next = second1;
    second1 -> next = third1;
    third1 -> next = fourth1;
    fourth1 -> next = fifth1;
    fifth1 -> next = sixth1;
    sixth1 -> next = third1;
    
    if (detect_loop_in_LL(head1)) {
        cout << "Loop is detected in head1" << endl;
    } else {
        cout << "No loop is detected in head1" << endl;
    }
    
    Node* head2 = nullptr;
    Node* first2 = new Node(10);
    Node* second2 = new Node(20);
    Node* third2 = new Node(30);
    Node* fourth2 = new Node(40);
    Node* fifth2 = new Node(50);
    Node* sixth2 = new Node(60);
    head2 = first2;
    head2 -> next = second2;
    second2 -> next = third2;
    third2 -> next = fourth2;
    fourth2 -> next = fifth2;
    fifth2 -> next = sixth2;
    sixth2 -> next = nullptr;
    
    if (detect_loop_in_LL(head2)) {
        cout << "Loop is detected in head2" << endl;
    } else {
        cout << "No loop is detected in head2" << endl;
    }
    
    return 0;
}
