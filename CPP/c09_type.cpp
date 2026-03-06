//Use typedef or using to create an alias for a structure and demonstrate usage.
#include<iostream>
#include<string>
using namespace std;

typedef struct Student{
    int roll;
    string name;

}stu;

int main(){
    stu s;
    cout<<"enter roll no: ";
    cin>>s.roll;
    cout<<"enter name: ";
    cin>>s.name;
    cout<<"Roll no: "<<s.roll<<" " <<"Name: " <<s.name;
    return 0;
}