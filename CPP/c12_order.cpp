/*Create an Order class that owns a collection of line items (IDs and quantities). Provide addLineItem(int id, int qty) and totalItems(); show object creation, modification, and summary printing.*/
#include<iostream>
using namespace std;
class Order{
    struct item{
        int id;
        int qty;

    };
item i[100];
int count =0;
public:
Order(){
    count =0;

}
void additems(int id,int qty){
    i[count].id=id;
    i[count].qty=qty;
    count ++;
}
int totali(){
int total=0;
for(int j=0;j<count;j++){
    total+=i[j].qty;
}  return total;
}
void display(){
     cout<<"\nOrder Summary\n";
        for(int j=0;j<count;j++)
        {
            cout<<"Item ID: "<<i[j].id<<" Quantity: "<<i[j].qty<<endl;
        }

        cout<<"Total Items: "<<totali()<<endl;
}
};
int main(){
    Order o;   
    o.additems(101,2);
    o.additems(205,5);
    o.additems(333,1);
    o.display();
   
    o.additems(150,4);
    o.display();

    return 0;
}