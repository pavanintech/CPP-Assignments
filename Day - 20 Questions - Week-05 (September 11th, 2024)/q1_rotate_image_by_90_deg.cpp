#include <iostream>
using namespace std;

int** getImage(int** matrix, int &rows, int &cols) {
    int temp = rows;
    rows = cols;
    cols = temp;
    int** image = new int*[rows];
    for (int i = 0; i < rows; i++) {
        image[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            image[i][j] = matrix[cols-j-1][i];
        }
    }
    return image;
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
    
    cout << "Enter elements in matrix: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }
    
    cout << "The original Matrix is: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    int** image_matrix = getImage(matrix, rows, cols);
    
    cout << "The rotated Matrix is: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << image_matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete matrix;
    return 0;
}
