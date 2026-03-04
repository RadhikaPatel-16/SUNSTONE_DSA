#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    int arr[100][100];

    for(int i = 0; i < rows; i++) {
    int sum = 0;
    for(int j = 0; j < cols; j++) {
        sum += arr[i][j];
    }
    cout << "Row " << i << " Sum = " << sum << endl;
}
    

    return 0;
}