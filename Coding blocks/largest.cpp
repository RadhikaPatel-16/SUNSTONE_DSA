#include<iostream>
using namespace std;
int main(){
    long long A , B , C ;
    cin>> A >> B >> C;
    long long largest = A;
    if (B > largest) largest = B;
    if (C > largest) largest = C;
        cout<< largest;
    return 0;
}