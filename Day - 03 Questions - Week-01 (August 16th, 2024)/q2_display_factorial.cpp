#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    long long factorial = 1;
    for (int i = n; i >= 2; i--) {
        factorial *= i;
    }
    
    cout << "The factorial of " << n << " is: " << factorial << endl;
    return 0;
}
