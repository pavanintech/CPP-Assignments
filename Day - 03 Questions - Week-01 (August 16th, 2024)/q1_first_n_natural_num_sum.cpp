#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter a number: ";
    cin >> n;
    
    int sum = 0;
    // sum of first n natural numbers = (n^2 + n) / 2
    
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    
    return 0;
}
