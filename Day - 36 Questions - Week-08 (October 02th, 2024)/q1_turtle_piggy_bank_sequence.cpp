#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int result;
        if (n % 2 == 0) {
            result = *min_element(a.begin(), a.end());
        } else {
            result = *max_element(a.begin(), a.end());
        }
        
        cout << result << endl;
    }
    return 0;
}
