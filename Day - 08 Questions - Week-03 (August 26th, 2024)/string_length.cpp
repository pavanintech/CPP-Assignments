#include <iostream>
#include <string>
using namespace std;

int stringLength(const std::string &str);

int main() {
    string str;
    getline(cin, str);
    
    int length = stringLength(str);
    cout << length << endl;
    return 0;
}

int stringLength(const string& str) {
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++) length++;
    return length;
}
