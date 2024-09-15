#include <iostream>
using namespace std;

// Write C++ program to demonstrate how to create dynamic variable using new keyword.

int main() {
    int* int_var = new int(2);
    int n = 5;
    int* int_arr = new int[n];
    int rows = 3, cols = 3;
    int** int_2d_arr = new int*[rows];
    
    for (int i = 0; i < rows; i++) {
        int_2d_arr[i] = new int[cols];
    }
    for (int i = 0; i < n; i++) {
        int_arr[i] = i*i*i + 5;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int_2d_arr[i][j] = i*i + j*j + 7;
        }
    }
    
    cout << "Integer Variable: " << *int_var << endl;
    cout << "Integer Array: ";
    for (int i = 0; i < n; i++) {
        cout << int_arr[i] << " ";
    }
    cout << endl;
    cout << "Integer 2D Array: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << int_2d_arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
