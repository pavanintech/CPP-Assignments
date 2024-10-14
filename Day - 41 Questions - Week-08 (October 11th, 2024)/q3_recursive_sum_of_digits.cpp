#include <iostream>
using namespace std;

int sum_of_digits (long long n) {
    if (n < 10) return n;
    else return (n % 10) + sum_of_digits((long long)n / 10);
}

int main() {
    long long int n;
    cout << "Enter number: ";
    cin >> n;
    
    cout << "Sum of Digits: " << sum_of_digits(n) << endl;
    return 0;
}
