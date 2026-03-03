#include <iostream>
using namespace std;

int findMax(int arr[], int n) {
    int maximum = arr[0];   // assume first element is max
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    
    return maximum;
}

int main() {
    int n;
    cin >> n;
    
    if (n <= 0) return 0;   // as N cannot be negative
    
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = findMax(arr, n);
    cout << result;
    
    return 0;
}