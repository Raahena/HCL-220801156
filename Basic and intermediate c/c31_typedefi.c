//Use typedef or using to create an alias for a structure and demonstrate usage.
#include<stdio.h>
typedef struct{
    int price;
}p;

int main(){
    p pr;
    pr.price=30;
    printf("%d",pr.price);
}