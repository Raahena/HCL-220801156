//Write a function to swap two integers using pointers.
#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    cout<<"Enter two int: ";
    cin>>a>>b;
    swap(&a,&b);
    cout<<"after swap: ";
    cout<<a<<" "<<b;
    return 0;
}