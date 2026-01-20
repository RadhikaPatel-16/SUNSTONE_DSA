#include<iostream>
using namespace std;
int main(){
    long long salary ;
    int experience;
    cin>> salary >> experience;
    
    if (experience >= 5) {
        cout << (salary * 10) / 100;
    } else {
        cout<< 0;
    }
    return 0;
}