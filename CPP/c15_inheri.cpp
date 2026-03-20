//Create classes: Teacher + Researcher → Professor
//Demonstrate multiple inheritance and method overriding.
#include<iostream>
using namespace std;
class Teacher{
public:
string subject;
void display(){
    cout<<subject<<endl;
}
};
class Researcher{
    public:
    string area;
  void display(){
    cout<<area<<endl;
}

};
class Professor: public Teacher,public Researcher{
    public:
    string name;
    void display()
{
            cout << "Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Research Area: " << area << endl;
}
};

int main(){
    Professor p;

    cin >> p.name;
    cin >> p.subject;
    cin >> p.area;

    p.display();

    return 0;
}

