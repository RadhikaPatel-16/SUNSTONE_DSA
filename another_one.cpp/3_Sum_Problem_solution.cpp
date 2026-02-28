#include <iostream>
#include <algorithm>
using namespace std;

void findTriplets(int arr[], int n, int target) {
    
    sort(arr, arr + n);  // Step 1: Sort array
    
    for(int i = 0; i < n - 2; i++) {
        
        // Skip duplicate elements
        if(i > 0 && arr[i] == arr[i - 1])
            continue;
        
        int left = i + 1;
        int right = n - 1;
        
        while(left < right) {
            
            int sum = arr[i] + arr[left] + arr[right];
            
            if(sum == target) {
                cout << arr[i] << ", " 
                     << arr[left] << " and " 
                     << arr[right] << endl;
                
                left++;
                right--;
                
                // Skip duplicates
                while(left < right && arr[left] == arr[left - 1])
                    left++;
                while(left < right && arr[right] == arr[right + 1])
                    right--;
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    int arr[1000];
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int target;
    cin >> target;
    
    findTriplets(arr, n, target);
    
    return 0;
}