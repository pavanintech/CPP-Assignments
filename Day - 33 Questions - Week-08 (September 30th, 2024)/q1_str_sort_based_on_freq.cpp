#include <iostream>
#include <algorithm>
using namespace std;

int freq[26] = {0};

int partition(string &s, int low, int high) {
    char pivot = s[low];
    int i = low + 1;
    
    for (int j = i; j <= high; j++) {
        if (freq[s[j] - 'a'] > freq[pivot - 'a']) {
            char c1 = s[i];
            s[i] = s[j];
            s[j] = c1;
            i++;
        } else if (freq[s[j] - 'a'] == freq[pivot - 'a'] && s[j] < pivot) {
            swap(s[j], s[i]);
            i++;
        }
    }
    swap(s[i-1], s[low]);
    return i-1;
}

void quickSort(string &s, int low, int high) {
    if (low < high) {
        int pI = partition(s, low, high);
        
        quickSort(s, low, pI-1);
        quickSort(s, pI+1, high);
    }
}

int main() {
    string s;
    cin >> s; // single word is taken
    
    for (char ch: s) {
        freq[tolower(ch) - 'a']++;
    }
    
    quickSort(s, 0, s.size() - 1);
    
    cout << s << endl;

    return 0;
}
