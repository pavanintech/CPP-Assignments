#include <iostream>
#include <algorithm>
using namespace std;

// You are given an array of integer and target integer now you have to tell it posible to select two elements from an array such that their sum is equal to target.
// If it is possible then print YES otherwise print NO. Sample testcase arr :[2,7,11,15], target = 9 output : YES . Write code that work in O(n^2) complexity and O(n*logn) complexity.
// Take all the required input from user.

bool bruteForce(int* arr, int n, int x) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[i] + arr[j] == x) {
                return true;
            }
        } 
    }
    return false;
}

bool twoPointer(int* arr, int n, int x) {
    sort(arr, &arr[n-1]);
    int left = 0, right = n-1, sum;
    while (left < right) {
        sum = arr[left] + arr[right];
        if (sum == x) return true;
        else if (sum < x) left++;
        else right--;
    }
    return false;
}

int main() {
    int n, target;
    cout << "Enter size of array: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter Target: ";
    cin >> target;
    
    cout << "Using O(n^2) method: ";
    if (bruteForce(arr, n, target)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    cout << "Using O(n*log(n)) method: ";
    if (twoPointer(arr, n, target)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
