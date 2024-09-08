#include <iostream>
#include <climits>
using namespace std;

int findMax(const int arr[], int size);

int main() {
    int size;
    cout << "Enter Size: ";
    cin >> size;
    int* arr = new int[size];
    cout << "Enter " << size << " Elements: ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    int mx = findMax(arr, size);
    cout << mx << endl;
    return 0;
}

int findMax(const int arr[], int size) {
    int mx = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (mx < arr[i]) mx = arr[i];
    }
    return mx;
}
