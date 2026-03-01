//15.Compute the average of an array using pointer arithmetic (no indexing).

#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main() {
int arr[]={1,2,3,4,5,6};
int *p=arr;
int n=sizeof(arr)/sizeof(arr[0]);
float avg=0;
for(int i=0;i<n;i++){
    avg+=*(p);
    p++;
}
printf("%.2f",avg/n);
return 0;
}

