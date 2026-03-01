#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void swap(char **a,char **b){
    char *temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
char *str1=malloc(20);
char *str2=malloc(20);
strcpy(str1,"hello");
strcpy(str2,"world");
printf("%s\n",str1);
printf("%s\n",str2);
swap(&str1,&str2);
printf("%s\n",str1);
printf("%s\n",str2);}