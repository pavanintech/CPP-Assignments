#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter first integer: ";
    cin >> x;
    cout << "Enter second integer: ";
    cin >> y;
    
    cout << "Addition: " << x+y << endl;
    cout << "Subtraction: " << x-y << endl;
    cout << "Multiplication: " << x*y << endl;
    cout << "Division: ";
    if (y != 0) cout << (double)x/y << endl;
    else cout << "Zero Division Error!" << endl;
    cout << "Modulus: " << x%y << endl;
    
    return 0;
}
