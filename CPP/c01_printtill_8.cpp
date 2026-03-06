//1.	Program to accept a password and check if its length is greater than 8.  
#include<iostream>
#include<string>
using namespace std;
int main(){
    string string1;
    cout<<"give password of length >8 ";
    cin>>string1;
    if(string1.length()>8){
        cout<< "valid";
    }
    else{
        cout<<"Invalid";
    }
return 0;
}