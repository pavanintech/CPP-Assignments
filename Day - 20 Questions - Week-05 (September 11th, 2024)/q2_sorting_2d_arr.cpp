#include <iostream>
#include <algorithm>
using namespace std;

// Ques 2: Write a C++ program that take 2D array from user and then sort this array. Input n=3, m=3 array=
// 7 4 1
// 8 5 2
// 9 6 3

int** sort2dArray(int** matrix, int rows, int cols) {
    int* flat_arr = new int[rows*cols];
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flat_arr[k++] = matrix[i][j];
        }
    }
    sort(flat_arr, flat_arr + rows*cols);
    int** sorted = new int*[rows];
    for (int i = 0; i < rows; i++) {
        sorted[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sorted[i][j] = flat_arr[rows*cols - k--];
        }
    }
    delete[] flat_arr;
    return sorted;
}

int main() {
    int rows, cols;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter cols: ";
    cin >> cols;
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    cout << "Enter Elements: " << endl;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int** sorted_arr = sort2dArray(matrix, rows, cols);
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << sorted_arr[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            delete[] sorted_arr[i];
            sorted_arr[i] = nullptr;
        }
    }
    delete[] sorted_arr;
    
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
        matrix[i] = nullptr;
    }
    delete[] matrix;
    
    return 0;
}
