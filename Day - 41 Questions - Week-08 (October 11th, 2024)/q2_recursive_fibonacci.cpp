#include <iostream>
using namespace std;

int fibonacci (int f) {
    if (f == 0) return 0;
    else if (f == 1) return 1;
    else return fibonacci(f - 1) + fibonacci(f - 2);
}

int main() {
    int f;
    cout << "Enter number: ";
    cin >> f;
    cout << "Fibonacci number: " << fibonacci(f) << endl;
    return 0;
}
