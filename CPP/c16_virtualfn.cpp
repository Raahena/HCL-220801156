//Create classes: Device → Phone & Camera → SmartPhone
//Use virtual base classes to avoid duplicate Device members.

#include<iostream>
#include<string>
using namespace std;
class Device{
    public:
    string brand;
    void displaydevice(){
    cout<<"Brand: "<<brand<<endl;
    }
};
class Camera : virtual public Device{
   public:
    int megapixel;
    void dispcam(){
        cout<<"megapixel: "<<megapixel<<endl;

    }

};
class Phone : virtual public Device{
public:
    string network;

    void displayPhone(){
        cout << "Network: " << network << endl;
    }
};
class SmartPhone : public Phone, public Camera{
public:
    string os;

    void displaySmartPhone(){
        displaydevice();   // Only ONE Device copy used
        displayPhone();
        dispcam();
        cout << "OS: " << os << endl;
    }
};
int main(){
    SmartPhone s;

    cin >> s.brand;
    cin >> s.network;
    cin >> s.megapixel;
    cin >> s.os;

    s.displaySmartPhone();

    return 0;
}