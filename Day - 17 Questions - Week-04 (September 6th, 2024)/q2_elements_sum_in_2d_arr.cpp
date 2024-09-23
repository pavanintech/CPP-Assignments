#include <iostream>
using namespace std;

// Ques 2: Write a C++ code that take 2D array from user input. Now you have to find sum of all values of the array.

long long int getSum(int** matrix, int rows, int cols) {
    long long sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
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
    cout << "Enter Element of 2D Array: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    cout << "Sum of Elements is: " << getSum(matrix, rows, cols);
    for (int i = 0; i < rows; i++) {
        delete matrix[i];
    }
    delete[] matrix;
    return 0;
}
