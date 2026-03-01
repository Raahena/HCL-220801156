// recursive 8.Print the first N Fibonacci numbers iteratively; then re-implement recursively.
#include <stdio.h>

int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    printf("No of Fibonacci numbers: ");
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
        printf("%d ", fib(i));
    return 0;
}
