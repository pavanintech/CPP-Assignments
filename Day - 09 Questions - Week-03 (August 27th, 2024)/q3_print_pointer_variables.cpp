#include <iostream>
using namespace std;

int main() {
    int x = 36;
    int* x_ptr = &x;;
    int** x_ptr_ptr = &x_ptr;
    
    cout << "Printing Using Actual Variable: " << x << endl;
    cout << "Printing Using Pointer Variable: " << *x_ptr << endl;
    cout << "Printing Using Double Pointer Variable: " << **x_ptr_ptr << endl;
    return 0;
}
