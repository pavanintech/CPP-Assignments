#include <iostream>
using namespace std;

int countCharacter(const std::string &str, char ch);

int main() {
    string str;
    getline(cin, str);
    char x;
    cin >> x;
    
    int count = countCharacter(str, x);
    cout << count << endl;
    return 0;
}

int countCharacter(const string &str, char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) count++;
    }
    return count;
}
