//9.Reverse an integer (e.g.,12345 -> 54321) and discuss overflow for 32-bit ints.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


int main() {
    int n,rev=0;
    scanf("%d",&n);
    while(n!=0){
        int digit=n%10;
        // if((rev>((INT_MAX-digit)/10))||(rev < ((INT_MIN - digit) / 10))){
        //      printf("Overflow");
        //      return 0;
        //  }
        rev=rev*10+digit;
        n=n/10;}

    printf("%d",rev);
}

