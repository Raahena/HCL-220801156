//11.Read a string (with spaces) safely and print its length without using strlen.
#include <stdio.h>

int main() {
char str[50];
int i=0, count=0;
fgets(str,sizeof(str),stdin);
printf("%s",str);
while(str[i]!='\0'){
    count++;
    i++;
}
printf("length %d",count);
return 0;
}

