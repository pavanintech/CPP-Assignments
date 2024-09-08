#include <iostream>
using namespace std;

bool isPalindrome(const std::string &str) {
    int i = 0, j = str.size() - 1;
    while (i < j) {
        if (!isalnum(str[i])) i++;
        else if (!isalnum(str[j])) j--;
        else if (tolower(str[i]) != tolower(str[j])) {
            return false;
        } else {
            i++;
            j--;
        }
    }
    return true;
}

int main() {
    string str;
    getline(cin, str);
    cout << boolalpha << isPalindrome(str) << endl;
    return 0;
}
