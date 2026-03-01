//12. Remove all occurrences of a given character from a string in-place.

#include <stdio.h>

int main() {
char str[50];
int i=0,j=0;
fgets(str,sizeof(str),stdin);

char c;
scanf("%c",&c);

while(str[i]!='\0'){
    if(str[i]!=c)
    {
        str[j]=str[i];
        j++;
    }
    i++;
}
str[j]='\0';
printf("%s",str);
return 0;
}

