#include <iostream>
using namespace std;

int* returnG(int* A, int n, int& s) {
    s = n;
    int* G = new int[s];
    for (int i = 0; i < s; i++) {
        G[i] = -1;
    }
    
    for (int i = 1; i < n; i++) {
        int j = i-1;
        while (j >= 0) {
            if (A[i] > A[j]) {
                G[i] = A[j];
                break;
            }
            j--;
        }
    }
    
    return G;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int* A = new int[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    int size;
    int* G = returnG(A, n, size);
    
    for (int i = 0; i < size; i++) {
        cout << G[i] << " ";
    }
    cout << endl;
    
    delete[] G;
    delete[] A;
    return 0;
}
