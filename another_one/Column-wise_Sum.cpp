#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int arr[100][100];

    for(int j = 0; j < cols; j++) {
    int sum = 0;
    for(int i = 0; i < rows; i++) {
        sum += arr[i][j];
    }
    cout << "Column " << j << " Sum = " << sum << endl;
}

    return 0;
}