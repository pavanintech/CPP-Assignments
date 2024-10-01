Day - 24 Questions - Week-06 (September 17th, 2024)#include <iostream>
using namespace std;

int getMaxCount(bool* arr, int n) {
    int i = 0, maxCount = 0, currentCount = 0;
    while (i < n) {
        if (arr[i] == 0) {
            currentCount = 0;
        } else {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        }
        i++;
    }
    return maxCount;
}

int main() {
    int n;
    cout << "Enter binary array size: ";
    cin >> n;
    bool* arr = new bool[n];
    cout << "Enter binary array elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    cout << "Max Consecutive Ones: " << getMaxCount(arr, n) << endl;
    
    return 0;
}
