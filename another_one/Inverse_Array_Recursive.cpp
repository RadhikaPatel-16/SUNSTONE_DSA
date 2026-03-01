#include <iostream>
using namespace std;

void inverseArray(int arr[], int inv[], int n, int index) {
    // Base Case
    if(index == n)
        return;

    // Recursive Call
    inverseArray(arr, inv, n, index + 1);

    // Work after recursive call
    inv[arr[index]] = index;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    int inv[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    inverseArray(arr, inv, n, 0);

    for(int i = 0; i < n; i++) {
        cout << inv[i] << " ";
    }

    return 0;
}