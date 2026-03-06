//Write a program to:
    //    Read a string and display its length.
    //    Convert it to uppercase without using built-in functions.
    #include<iostream>
    #include<string>
    using namespace std;
    int main(){
string str;
cout<<"Enter the string: ";
cin>> str;
cout<<"Length of str : "<<str.length()<<endl;
for(int i=0;i<str.length();i++){
    if(str[i]>=97 &&str[i]<=122){
        str[i]=str[i]-32;
    }
}
cout<<str;
return 0;

    }