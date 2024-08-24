#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    string concatstr = str1 + str2;
    
    cout << "Concatenated string: " << concatstr;
    
    return 0;
}
