
//6.Swap two integers without using a temporary variable.
#include <stdio.h>

int main() {
int a,b;
a=10;
b=20;
printf("Before swap %d %d\n",a,b);
a=a^b;//(01010)^(10100)=11110 (30)
b=a^b;//11110^10100=01010(10)
a=a^b;//11110^01010=10100(20)
printf("After swap %d %d",a,b);
    return 0;
}



