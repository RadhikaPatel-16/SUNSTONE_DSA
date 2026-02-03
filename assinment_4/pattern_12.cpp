#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int mid = N / 2;

    for (int i = 0; i < N; i++) {

        int count;
        if (i <= mid)
            count = i + 1;
        else
            count = N - i;

        int leadingSpaces = mid - count + 1;

        // Leading spaces
        for (int s = 0; s < leadingSpaces; s++) {
            cout << "    ";
        }

        // Left numbers (descending)
        for (int num = count; num >= 1; num--) {
            cout << num << " ";
        }

        // Middle spaces
        if (count > 1) {
            int midSpaces = 2 * count - 3;
            for (int s = 0; s < midSpaces; s++) {
                cout << "    ";
            }

            // Right numbers (ascending)
            for (int num = 1; num <= count; num++) {
                cout << num << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
