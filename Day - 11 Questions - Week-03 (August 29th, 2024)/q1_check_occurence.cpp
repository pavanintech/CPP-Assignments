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
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            isPresent = true;
            break;
        }
    }
    if (isPresent) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
