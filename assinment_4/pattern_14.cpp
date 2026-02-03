#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=n;i>=0;i--){
        for(int j=n;j>=i;j--){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        if(i!=0){
            for(int j=i;j<=n;j++){
                cout<<j<<" ";
            }
        }else{
            for (int j = 1; j <= n ; j++)
            {
                cout<<j<<" ";
            }
            
        }
        
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<j<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"  ";
        }
        if(i!=0){
            for(int j=i;j<=n;j++){
                cout<<j<<" ";
            }
        }else{
            for (int j = 1; j <= n ; j++)
            {
                cout<<j<<" ";
            }
            
        }
        
        cout<<endl;
    }
    return 0;
}