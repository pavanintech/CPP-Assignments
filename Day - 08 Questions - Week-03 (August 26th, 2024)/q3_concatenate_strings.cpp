#include <iostream>
using namespace std;

std::string concatenateStrings(const std::string &str1, const std::string &str2);

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    
    string concat_str = concatenateStrings(str1, str2);
    cout << concat_str << endl;
    return 0;
}

string concatenateStrings(const string &str1, const string &str2) {
    string concat_str;
    concat_str = str1 + str2;
    return concat_str;
}
