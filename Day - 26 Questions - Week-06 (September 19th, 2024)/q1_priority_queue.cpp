#include <iostream>
using namespace std;

struct Element {
    int value;
    int priority;
};

class PriorityQueue {
private:
    Element arr[100];
    int size;

public:
    PriorityQueue() : size(0) {}

    void enqueue(int value, int priority) {
        if (size == 100) {
            cout << "Queue overflow!" << endl;
            return;
        }
        arr[size].value = value;
        arr[size].priority = priority;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue underflow!" << endl;
            return;
        }

        int maxPriorityIndex = 0;
        for (int i = 1; i < size; i++) {
            if (arr[i].priority > arr[maxPriorityIndex].priority) {
                maxPriorityIndex = i;
            }
        }

        cout << "Dequeued Element: " << arr[maxPriorityIndex].value << " with priority " << arr[maxPriorityIndex].priority << endl;
        for (int i = maxPriorityIndex; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    void display() {
        if (size == 0) {
            cout << "The queue is empty!" << endl;
            return;
        }
        cout << "Priority Queue Elements:\n";
        for (int i = 0; i < size; i++) {
            cout << "Value: " << arr[i].value << ", Priority: " << arr[i].priority << endl;
        }
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10, 2);
    pq.enqueue(20, 1);
    pq.enqueue(30, 4);
    pq.enqueue(40, 3);

    pq.display();

    pq.dequeue();
    pq.display();

    return 0;
}
