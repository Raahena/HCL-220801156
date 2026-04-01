//Create a base class Employee with name and salary. Derive Manager that adds department. Implement a function to display all details.
#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
    float salary;
    string name;
    void display(){
        cout<<name<<" "<<salary;

    }
};
class Manager: public Employee{
    public:
string department;
void display(){
    cout<<name<<" "<<salary<<" "<<department;
}
};
int main(){
    Manager m;
    cin>>m.name>>m.salary>>m.department;
    m.display();
    return 0;
}