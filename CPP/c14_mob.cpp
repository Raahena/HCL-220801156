//partment. Implement a function to display all details.
// 3.	Create classes: Device → Mobile → Smartphone
// Add features at each level and show how derived class accesses base class members.

#include<iostream>
#include<string>

using namespace std;
class Device{
    public:
string deviceName;

string manufacturer;
void displayD(){
    cout<<deviceName<<" "<<manufacturer<<endl;
}

};
class Mobile:public Device{
public:
string networkType;

int battery ;
void displayM(){
    cout<<networkType<<" "<<battery<<endl;
}
};
class Smartphone : public Mobile{
public:
    string operatingSystem;
    int camera;

    void displayS(){
        cout<<operatingSystem<<" "<<camera<<endl;
    }
};
int main(){
    Smartphone s;

    cin>>s.deviceName;
    cin>>s.manufacturer;
    cin>>s.networkType;
    cin>>s.battery;
    cin>>s.operatingSystem;
    cin>>s.camera;

    s.displayD();
    s.displayM();
    s.displayS();

    return 0;
}