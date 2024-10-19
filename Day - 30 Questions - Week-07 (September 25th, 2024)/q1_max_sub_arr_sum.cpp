#include <iostream>
#include <sstream>
#include <algorithm>
#include <climits>
using namespace std;

int maxSubArrSum_KA(int*, int);
int* maxSumSubArr_KA(int*, int, int&, int&);

int main() {
    int* arr;
    cout << "Enter elements: ";
    string line;
    getline(cin, line);
    int n = count(line.begin(), line.end(), ' ') + 1;
    arr = new int[n];
    stringstream ss(line);
    int num, i = 0;
    while (ss >> num) {
        arr[i] = num;
        i++;
    }
    
    // cout << "Max Sum: " << maxSubArrSum_KA(arr, n);
    
    int size, maxSum;
    int* subArr = maxSumSubArr_KA(arr, n, size, maxSum);
    
    cout << "Max Sum: " << maxSum << endl;
    cout << "Sub Arr: "
    for (int i = 0; i < size; i++) {
        cout << subArr[i] << " ";
    }
    cout << endl;
    
    delete[] arr;
    return 0;
}

int* maxSumSubArr_KA(int* arr, int n, int& size, int& sum) {
    int currSum = 0, maxSum = INT_MIN;
    int st, end;
    int temp_st = 0;
    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        if (currSum > maxSum) {
            maxSum = currSum;
            st = temp_st;
            end = i;
        }
        if (currSum < 0) {
            currSum = 0;
            temp_st = i+1;
        }
    }
    size = end - st + 1;
    int* subArr = new int[size];
    for (int i = 0; i < size; i++) {
        subArr[i] = arr[st + i];
    }
    sum = maxSum;
    return subArr;
}

int maxSubArrSum_KA(int* arr, int n) {
    int currSum = 0, maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0) {
            currSum = 0;
        }
    }
    return maxSum;
}
