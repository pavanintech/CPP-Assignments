#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main() {
    int n = 5;
    int* grades = (int*)malloc(n*sizeof(int));
    int gradeSum = 0;
    for (int i = 0; i < n; i++) {
        cout << "Enter grade " << i+1 << ": ";
        cin >> grades[i];
        gradeSum += grades[i];
    }
    double avgGrade = (double)gradeSum / n;
    cout << "The average grade is: " << avgGrade << endl;
    return 0;
}
