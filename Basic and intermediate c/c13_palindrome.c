//13. Check if a string is a palindrome (ignore case and non-alphanumeric).
#include <stdio.h>
#include <ctype.h>
#include<string.h>
int main() {
char str[50];
int i=0;
fgets(str,sizeof(str),stdin);
int j=strlen(str)-1;
if(str[j]=='\n'){
    str[j--]='\0';
}
while(i<j){
    if(!isalnum(str[i])){
        i++;
        continue;
    }
      if(!isalnum(str[j])){
        j--;
        continue;
    }
    if(tolower(str[i])!=tolower(str[j])){
        printf("Not palindrome");
        return 0;
    }
    i++;
    j--;
}
printf("is a palindrome");
return 0;
}

