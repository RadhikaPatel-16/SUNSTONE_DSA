#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int mid = N / 2;

    for (int i = 0; i < N; i++) {
        int spaces, stars;

        if (i <= mid) {
            spaces = mid - i;
            stars = 2 * i + 1;
        } else {
            spaces = i - mid;
            stars = 2 * (N - i) - 1;
        }

        // Print leading tabs (spaces)
        for (int s = 0; s < spaces; s++) {
            cout << "\t";
        }

        // Print stars with tabs
        for (int s = 0; s < stars; s++) {
            cout << "*\t";
        }

        cout << endl;
    }

    return 0;
}
