#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int mid = N/2 ;
    for(int i = 0;i < N; i++ ){
        for(int j = 0;j < N; j++){
            bool Star =
           ( j == 0 || j == N - 1)|| 
                ((j == 1 || j == N - 2) && i != mid)
                ||
                (j == mid && (i == 0 || i == N - 1));
                if (Star)
            cout<< "*";
        if (j != N - 1)
            cout << "\t ";
        } 
        cout<<endl;
        }
        
    return 0;
}