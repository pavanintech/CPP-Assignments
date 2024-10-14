#include <iostream>
using namespace std;

int* returnAns (int* nums1, int n1, int* nums2, int n2, int& n) {
    n = n1;
    int* ans_arr = new int[n];
    for (int i = 0; i < n; i++)
        ans_arr[i] = -1;

    for (int i = 0; i < n1; i++) {
        int j = 0;
        while (j != n2-1) {
            if (nums2[j] == nums1[i]) {
                ans_arr[i] = nums2[j+1] > nums2[j] ? nums2[j+1] : -1;
            }
            j++;
        }
    }
    return ans_arr;
}

int main() {
    int n1, n2;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;
    
    int* nums1 = new int[n1];
    int* nums2 = new int[n2];
    
    cout << "Enter nums1 elements: ";
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];
    cout << "Enter nums2 elements: ";
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];

    int n;
    int* ans_arr = returnAns (nums1, n1, nums2, n2, n);
    
    cout << "Your answer array: ";
    for (int i = 0; i < n; i++)
        cout << ans_arr[i] << " ";
    cout << endl;
    
    delete[] nums1;
    delete[] nums2;
    return 0;
}

// Question
/*
    Ques 2. In an array, the next greater element for a given element x is defined as the first element to the right of x that is larger than x.

    You are provided with two distinct 0-indexed integer arrays, nums1 and nums2, where nums1 is a subset of nums2.
    
    For each element in nums1, find its corresponding position in nums2, and then identify the next greater element that appears to the right of it in nums2. If no such element exists, return -1 for that element.
    
    Your task is to return an array ans, where each element ans[i] represents the next greater element for nums1[i] as found in nums2. If no next greater element is found, the corresponding entry in ans should be -1. Note all the required input from the user.
    Sample :- n1=3 , n2 =4 nums1 = [4,1,2], nums2 = [1,3,4,2]
    Output :- [-1,3,-1].
    Explanation :- The next greater element for each value of nums1 is as follows:
    - 4 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
    - 1 is underlined in nums2 = [1,3,4,2]. The next greater element is 3.
    - 2 is underlined in nums2 = [1,3,4,2]. There is no next greater element, so the answer is -1.
*/
