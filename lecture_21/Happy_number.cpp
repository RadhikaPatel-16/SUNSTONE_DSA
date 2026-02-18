#include <iostream>
#include <unordered_set>
using namespace std;

int getSum(int n) {
    int sum = 0;
    
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    
    return sum;
}

bool isHappy(int n) {
    unordered_set<int> visited;
    
    while (n != 1) {
        if (visited.count(n)) {
            return false;  // cycle detected
        }
        
        visited.insert(n);
        n = getSum(n);
    }
    
    return true;
}

int main() {
    int n;
    cin >> n;
    
    if (isHappy(n))
        cout << "true";
    else
        cout << "false";
    
    return 0;
}
