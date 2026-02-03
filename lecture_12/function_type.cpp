#include <iostream>
using namespace std;
// No argument & No return
void great(){
    cout <<"Hello"<<endl;
}
//argument & No return
void great(string name){
cout<<"hello"<< name <<endl;
}
// No argument & return 
int Subtract(){
    int a = 5;
    int b = 3;
    int c = a - b;
    return c;
}
// argument & return
int Add(int a, int b){
    int c=a+b;
    return c;
}
int main() {
    great();
    great("Radhika");
    //1st way
    int a= Add(8,3);
    cout<<a<<endl;
    // 2nd way
    cout <<Add(8,3)<<endl;
    cout<< Subtract() <<endl;

    return 0;
}