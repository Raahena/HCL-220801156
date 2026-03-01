//10.aWrite a program in C to check Armstrong and Perfect numbers using the function.
#include <stdio.h>
#include <math.h>

int isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;

    while(temp != 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while(temp != 0) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == n;
}

int isPerfect(int n) {
    int sum = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }
    return sum == n;
}
int main() {
    int n;
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    if(isPerfect(n))
        printf("Perfect");
    else
        printf("Not Perfect");

    return 0;
}

