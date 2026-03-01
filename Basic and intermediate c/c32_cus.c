//Create a struct Order containing struct Customer and struct Item. Implement a function to print complete order details.
#include<stdlib.h>
#include<stdio.h>
struct customer{
    char name[50];
};
struct item{
    char itemname[50];
    int quantity;
    float money;
};
struct order{
    struct customer c;
    struct item i;

};
int main(){
    printf("Enter the cus name: ");

        struct order o;
    fgets(o.c.name,50,stdin);
  
    printf("Enter item: ");
    fgets(o.i.itemname,50,stdin);
    printf("Enter quantity: ");
    scanf("%d",&o.i.quantity);
    printf("Enter rs: ");
    scanf("%f",&o.i.money);
    printf("name: %sitem name: %sitem quantity: %d\nmoney:%.2f",o.c.name,o.i.itemname,o.i.quantity,o.i.money);
return 0;
}