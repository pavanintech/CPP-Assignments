#include <iostream>
#include <fstream>
using namespace std;

// Ques 2: Write C++ program that take input from the txt file and then print output inside terminal. Take any txt file by yourself.

int main() {
    ifstream inputFile("input.txt");
    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }
    inputFile.close();
    return 0;
}
