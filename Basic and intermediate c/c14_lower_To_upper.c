//14.Convert a lowercase string to uppercase without toupper(ASCII arithmetic).

#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main() {
char str[50];
int j=0;
fgets(str,sizeof(str),stdin);
for(int i=0;i<strlen(str);i++){
char c=str[i];
if(c>=97&&c<=122){
    str[j]=c-32;
    j++;
}
    
}
printf("%s",str);
return 0;
}

