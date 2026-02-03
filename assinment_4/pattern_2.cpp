#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    
    for(int i = 1;i <= N; i++ ){
        for(int space = 1; space <= N - i; space++){
            cout << "\t";
        }
           for (int num = i; num <= 2 * i - 1; num++){
            cout<< num<< "\t";
           }
        for (int num = 2 * i - 2; num >= i; num--){
            cout <<num<< "\t ";
        } 
        cout<<endl;
        }
        
    return 0;
}