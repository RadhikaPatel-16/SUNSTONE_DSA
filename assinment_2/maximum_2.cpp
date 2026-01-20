#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin>> a>> b>> c;
    if(a>=b && a>=c)
    cout << "maximum = " << a;
    else if(b>=a && b>=c)
    cout << "maximum = " << b;
    else
    cout << "maximum = " << c;
    return 0;
}