#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    cout << "Multiplication table of " << n << ":" << endl;
    int i = 1;
    while (i <= 10) {
        cout << n << " x " << i << " = " << n*(i++) << endl;
    }
    return 0;
}
