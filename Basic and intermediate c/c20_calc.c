//20. Implement a menu-driven calculator using an array of function pointers.
//19.Create and use a function pointer to select different arithmetic operations at runtime.
#include<stdio.h>

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}
int divison(int a,int b){if(b==0){printf("div not possible");return 0;}return a/b;}
int main(){
int (*operation[])(int,int)={add,sub,mul,divison};
int choice,a,b;
a=10,b=20;
printf("Enter 1.add,2.sub,3.mul,4.div: ");
scanf("%d",&choice);
int result =operation[choice-1](a,b);
printf("%d",result);

}