#include<iostream>
using namespace std;
int main(){
    int units;
    cin>> units;
    int bill = 0;
    if(units <= 100){
        bill = units * 2;
    }
    else if(units <= 200){
        bill = (100 * 2) + (100 * 3) + (units - 200)*5;
    }
    cout << bill;
    return 0;
}