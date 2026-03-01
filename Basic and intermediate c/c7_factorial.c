//7.Compute the factorial of n using an iterative loop; handle n=0 correctly.
#include <stdio.h>

int main() {
printf("enter n: ");
int n,fact=1;
scanf("%d",&n);
if(n==0){
    printf("1");
}
else{
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("value of factorial: %d ",fact);
}
}

