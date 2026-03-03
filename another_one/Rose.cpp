#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> prices(N);
        for (int i = 0; i < N; i++) {
            cin >> prices[i];
        }

        int M;
        cin >> M;

        sort(prices.begin(), prices.end());

        int left = 0, right = N - 1;
        int ans1 = 0, ans2 = 0;
        int minDiff = 1e9;

        while (left < right) {
            int sum = prices[left] + prices[right];

            if (sum == M) {
                int diff = prices[right] - prices[left];
                if (diff < minDiff) {
                    minDiff = diff;
                    ans1 = prices[left];
                    ans2 = prices[right];
                }
                left++;
                right--;
            }
            else if (sum < M) {
                left++;
            }
            else {
                right--;
            }
        }

        cout << "Deepak should buy roses whose prices are "
             << ans1 << " and " << ans2 << "." << endl;

        if (T) cout << endl;   // blank line after each test case
    }

    return 0;
}