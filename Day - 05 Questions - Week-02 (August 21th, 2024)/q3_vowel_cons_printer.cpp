#include <iostream>
#include <string>
using namespace std;

int* vc_counter (string str) {
    int* vc = (int*)calloc(2, sizeof(int));
    for (int i = 0; str[i] != '\0'; i++) {
        switch (str[i]) {
            case 'a':
                vc[0]++;
                break;
            case 'e':
                vc[0]++;
                break;
            case 'i':
                vc[0]++;
                break;
            case 'o':
                vc[0]++;
                break;
            case 'u':
                vc[0]++;
                break;
            default:
                vc[1]++;
        }
    }
    return vc;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    int* vc = vc_counter(str);
    
    cout << "Number of vowels: " << vc[0] << endl;
    cout << "Number of consonants: " << vc[1] << endl;
    
    return 0;
}
