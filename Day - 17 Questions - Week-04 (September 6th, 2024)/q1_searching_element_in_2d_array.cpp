#include <iostream>
using namespace std;

// Ques 1: Write a C++ code that take 2D array and key from user. Now you have to check that key exist inside the array or not if it exits print YES otherwise NO.

bool searchKey(int** matrix, int rows, int cols, int x) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] == x) return true;
        }
    }
    return false;
}

int main() {
    int rows, cols, key;
    cout << "Enter rows: ";
    cin >> rows;
    cout << "Enter cols: ";
    cin >> cols;
    int** matrix = new int*[rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }
    cout << "Enter 2D Array Elements: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    cin >> key;
    if (searchKey(matrix, rows, cols, key)) {
        cout << "YES, " << key << " Exists." << endl;
    } else {
        cout << "No, " << key << " does not Exists." << endl;
    }
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete matrix;
    return 0;
}
