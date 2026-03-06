//Create a structure Order containing another structure Customer. Display complete order details.
#include<iostream>
#include<string>
using namespace std;
struct Order{
    int o_n;

    struct Customer{
       
        int cus_id;
        string name;

    }c;
};
int main(){
Order o;

    cout<<"Enter Order Number: ";
    cin>>o.o_n;

    cout<<"Enter Customer ID: ";
    cin>>o.c.cus_id;

    cout<<"Enter Customer Name: ";
    cin>>o.c.name;

    cout<<"\n----- Order Details -----\n";
    cout<<"Order Number: "<<o.o_n<<endl;
    cout<<"Customer ID: "<<o.c.cus_id<<endl;
    cout<<"Customer Name: "<<o.c.name<<endl;

    return 0;
}