#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

// Q 1. Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
// Sample :- Input: nums = [2,2,1]
// Output: 1

int main() {
    string line;
    cout << "Enter elements: ";
    getline(cin, line);
    int size = count(line.begin(), line.end(), ' ') + 1;
    int* arr = new int[size];
    stringstream ss(line);
    int i = 0;
    while (ss >> arr[i]) {
        i++;
    }
    
    int flag = 0;
    for (int i = 0; i < size; i++) {
        flag ^= arr[i];
    }
    
    cout << flag;
    
    return 0;
}
