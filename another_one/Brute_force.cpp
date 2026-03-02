#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int arr[1000];

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    // Sort array to print pairs in increasing order
    sort(arr, arr + N);

    for(int i = 0; i < N; i++) {
        for(int j = i + 1; j < N; j++) {
            if(arr[i] + arr[j] == target) {
                cout << arr[i] << " and " << arr[j] << endl;
            }
        }
    }

    return 0;
}