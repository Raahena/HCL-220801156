//	Create a menu-driven program using do-while for repeated user input until exit.
#include<iostream>
using namespace std;
int main(){
   int a,b,choice;

   do{
    cout<<"\n----- MENU -----\n";
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n";

        cout<<"Enter your choice: ";
        cin>>choice;
        if(choice>=1 && choice<=4){
               cout<<"Enter two elements: ";
               cin>>a>>b;
        }
        switch(choice){
            case 1:
            cout<<a+b<<endl;
            break;
            case 2:
            cout<<a-b<<endl;
            break;
            case 3:
            cout<<a*b<<endl;
            break;
            case 4 :
            cout<<a/b<<endl;
            break;
            case 5:
            cout<<"exiting...\n";
            break;
            default:
            cout<<"Invalid choice..\n";

        }
}while(choice!=5);
return 0;
}