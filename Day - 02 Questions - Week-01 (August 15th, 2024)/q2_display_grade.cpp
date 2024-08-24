#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter the score: ";
    cin >> score;
    char grade = '_';
    if (score >= 0 && score < 60) grade = 'F';
    else if (score >= 60 && score < 70) grade = 'D';
    else if (score >= 70 && score < 80) grade = 'C';
    else if (score >= 80 && score < 90) grade = 'B';
    else if (score >= 90 && score <= 100) grade = 'A';
    else cout << "Enter the score between 0 and 100!" << endl;
    
    cout << "Grade: " << grade << endl;
    return 0;
}
