#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maximumCount(vector<int>& nums) {
    int n = nums.size();
    
    // First element >= 0
    int firstZero = lower_bound(nums.begin(), nums.end(), 0) - nums.begin();
    
    // First element > 0
    int firstPositive = upper_bound(nums.begin(), nums.end(), 0) - nums.begin();
    
    int neg = firstZero;                 // elements before 0
    int pos = n - firstPositive;         // elements after 0
    
    return max(neg, pos);
}

int main() {
    vector<int> nums = {-3, -2, -1, 0, 0, 1, 2};
    cout << maximumCount(nums);
    return 0;
}