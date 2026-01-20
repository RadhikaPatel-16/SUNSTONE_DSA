#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if( n>=300 && n<=460 ){
         cout<<"You won a MacBook";}
        else {
        cout<<"Model: M1 Mac";
        }
        else if(n>=200 && n<=280 ){
            cout<<"You won a pake of Kurkure";
        }
        else if(n>=200 && n<=240 ){
            cout<<"Chili Kurkure";
        }
        else if(n>241 && n<=280 ){
            cout<<"Onion Kurkure";
        }
        else if(n>1100 && n<=1500 ){
            cout<<"you won a cycle";
        }else if(n>1100 && n<=1300 ){
            cout<<"Brand: Avon Cycle";
        }else if(n>1301 && n<=1500 ){
            cout<<"Brand: Hero Cycle";
        }
        else if(n>=50 && n<=80 ){
            cout<<"you won a Bike";
        }
        else if(n>50 && n<=65 ){
            cout<<"Model:Bullet";
        }
        else if(n>=65 && n<=80 ){
            cout<<"Model:Rajdoot";
        }
        else{
            cout<<"Better Luck Next Time";
        }
    
         return 0;
}

