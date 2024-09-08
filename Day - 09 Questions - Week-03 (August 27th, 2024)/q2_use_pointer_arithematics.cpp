#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};
    int* arr_ptr = &arr[0];
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        cout << *(arr_ptr + i) << " ";
    }
    cout << endl;
    return 0;
}
