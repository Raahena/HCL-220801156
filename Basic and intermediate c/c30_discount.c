//Define a struct Product with price and discount. Write two functions: One that calculates discounted price (call by value).Another that updates the price in the original structure (call by address).
#include<stdio.h>
#include<stdlib.h>
typedef struct{
int price;
int discount;
}prod;

void dis(prod p){
    int discounted;
    discounted=p.price-(p.price*p.discount/100);
    printf("discounted price : %d",discounted);
}

void updatepirce(prod *p,int n){
    p->price=n;
}
int main(){
    prod p;
p.price=50;
p.discount=2;
dis(p);

updatepirce(&p,60);
printf("%d",p.price);
}