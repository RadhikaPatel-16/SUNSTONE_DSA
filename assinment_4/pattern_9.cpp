#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"\t";
        }
        for(int j=1;j<=n-i-1;j++){
            cout<<"\t";
        }
        if(i==n){
            for(int j=i-1;j>=1;j--){
                cout<<j<<"\t";
            }
        }else{
            for(int j=i;j>=1;j--){
                cout<<j<<"\t";
            }
        }
       
        cout<<endl;
    }
    return 0;
}