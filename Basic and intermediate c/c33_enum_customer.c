//Define an enum Status with values PENDING, SHIPPED, DELIVERED. Write a program to update and display order status using the enum.
#include<stdio.h>
typedef enum Status{PENDING=1,SHIPPED=2,DELIVERED=3}status;
void updatestatus(status *current,status next){
    if(next<*current){
        printf("Cant reverse");
        return;
    }
    *current =next;
    printf("Status updated");
}
const char *getstatus(status s){
switch (s) {
        case PENDING:   return "PENDING";
        case SHIPPED:   return "SHIPPED";
        case DELIVERED: return "DELIVERED";
        default:        return "UNKNOWN";
    }
}
int main()
{
    status myOrder = PENDING;

    printf("Initial: %s\n", getstatus(myOrder));

    updatestatus(&myOrder, SHIPPED);
    printf("Current: %s\n", getstatus(myOrder));

    return 0;
}
