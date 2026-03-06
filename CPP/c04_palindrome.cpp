//Check if a given string is a palindrome without using built-in functions.
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    if(tolower(s[0])==tolower(s[s.length()-1])){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }
    return 0;
}