//19.Create and use a function pointer to select different arithmetic operations at runtime.
#include<stdio.h>

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int division(int a,int b){if(b==0){printf("div not possible");return 0;}return a/b;}
int main(){
int (*operation)(int,int);
int choice,a,b;
a=10,b=20;
printf("Enter 1.add,2.sub,3.mul,4.div: ");
scanf("%d",&choice);
switch(choice){
    case 1: operation=add;break;
    case 2: operation=sub;break;
    case 3: operation=mul;break;
    case 4: operation=division;break;
    default:
    printf("Invalid"); return 0;;
}
int result =operation(a,b);
printf("%d",result);

}