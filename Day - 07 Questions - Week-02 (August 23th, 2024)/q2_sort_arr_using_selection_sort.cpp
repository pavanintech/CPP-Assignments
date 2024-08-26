#include <iostream>
using namespace std;

void selectionSort(int* arr, int n) {
    int min;
    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min]) min = j;
        }
        if (min != i) {
            arr[min] = arr[i] + arr[min];
            arr[i] = arr[min] - arr[i];
            arr[min] = arr[min] - arr[i];
        }
    }
}

int main() {
    int n;
    cin >> n;
    int* arr = (int*)malloc(n*sizeof(int));
    
    for (int i = 0; i < n; i++)
        cin >> *(arr+i);
    
    selectionSort(arr, n);
    
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
