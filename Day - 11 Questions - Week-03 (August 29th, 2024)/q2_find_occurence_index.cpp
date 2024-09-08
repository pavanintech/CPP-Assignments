#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Enter Size: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter " << n << " Elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter Target: ";
    cin >> x;
    
    bool isPresent = false;
    int i = 0;
    while (i < n) {
        if (arr[i] == x) {
            isPresent = true;
            break;
        }
        i++;
    }
    if (isPresent) {
        cout << "1-based Index of " << x << " is " << i+1 << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
