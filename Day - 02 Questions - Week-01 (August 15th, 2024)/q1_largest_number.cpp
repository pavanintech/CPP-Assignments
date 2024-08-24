#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    cout << "Enter the third number: ";
    cin >> z;
    
    cout << "The largest number is: ";
    
    if (x >= y && x >= z) {
        cout << x;
    } else if (y >= x && y >= z) {
        cout << y;
    } else {
        cout << z;
    }

    return 0;
}
