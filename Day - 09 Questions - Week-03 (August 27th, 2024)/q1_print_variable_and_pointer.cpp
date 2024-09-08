#include <iostream>
using namespace std;

int main() {
    int x = 36;
    int* x_ptr = &x;
    cout << "Printing Using Variable: " << x << endl;
    cout << "Printing Using Pointer: " << *x_ptr << endl;
    return 0;
}
