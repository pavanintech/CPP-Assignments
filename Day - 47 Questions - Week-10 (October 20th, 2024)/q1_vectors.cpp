#include <iostream>
#include <vector>
using namespace std;

int findTarget(vector<int> integers, int x) {
    for (int i = 0; i < integers.size(); i++) {
        if (integers[i] == x) return i;
    }
    return -1;
}

int main() {
    vector<int> integers;
    int data;
    
    cout << "Enter '-1' to Stop inputting to vector:" << endl;
    
    while (true) {
        cin >> data;
        if (data == -1) break;
        integers.push_back(data);
    }
    int target;
    cout << "Enter Target to search: ";
    cin >> target;
    
    int index = findTarget(integers, target);
    
    cout << "Index: " << index << endl;
    
    return 0;
}
