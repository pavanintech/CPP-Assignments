#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    int* oesum = (int*)calloc(2, sizeof(int));
    
    cout << "Enter the array: ";
    
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++) {
        oesum[(arr[i]%2 ? 0 : 1)] += arr[i];
    }

    cout << "Sum of odd numbers: " << oesum[0] << endl;
    cout << "Sum of even numbers: " << oesum[1] << endl;
    return 0;
}
