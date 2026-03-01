//nonm recursive 8.Print the first N Fibonacci numbers iteratively; then re-implement recursively.
#include <stdio.h>

int main() {
    int n, a=0,b=1,c=0;
    printf("no of fibanocci : ");
    scanf("%d",&n);
    if(n==1){
        printf("%d",a);
    }
    else if(n==2){
    printf("%d %d",a,b);
        
    }
    else{        
    printf("%d %d ",a,b);
    for(int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
    }
}