//Demonstrate AND, OR, XOR, and shift operations on two integers.
#include<iostream>
#include<string>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter 2 integers";
    cin>>a>>b;
    cout<<"And op: "<<(a&b)<<endl;;
    cout<<"OR op: "<<(a|b)<<endl;
    cout<<"XOR op: "<<(a^b)<<endl;
    cout<<"Left shift by 1"<< (a<<1)<<endl;
    cout<<"Right shift by 1"<< (a>>1)<<endl;
    return 0;
}