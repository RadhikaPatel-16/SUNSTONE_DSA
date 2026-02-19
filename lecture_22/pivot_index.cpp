#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = 0;
    
    // Step 1: Calculate total sum
    for (int num : nums) {
        totalSum += num;
    }
    
    int leftSum = 0;
    
    // Step 2: Traverse and check pivot condition
    for (int i = 0; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i];
        
        if (leftSum == rightSum) {
            return i;  // Leftmost pivot index
        }
        
        leftSum += nums[i];
    }
    
    return -1;  // No pivot found
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    
    int result = pivotIndex(nums);
    cout << "Pivot Index: " << result << endl;
    
    return 0;
}
