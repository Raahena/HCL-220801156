//Create an array of char* to store names of cities entered by the user. Implement functions to sort them alphabetically and free allocated memory.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void *a,const void *b){
    char *const *str1=a;
    char *const *str2=b;
    return strcmp(*str1,*str2);

}
void sort(char **cities,int n){
    qsort(cities,n,sizeof(char *),compare);
}
int main(){
int n;
printf("Enter the number of cities");
scanf("%d",&n);
getchar();
char **cities=(char **)malloc(n*(sizeof(char *)));
if(cities==NULL){
    printf("Memory alloc failed");
}
for(int i=0;i<n;i++){
    char temp[100];
    printf("Enter city name %d: ",i+1);
    fgets(temp,sizeof(temp),stdin);
    temp[strcspn(temp,"\n")]='\0';
    cities[i]=malloc(strlen(temp)+1);
    if(cities[i]==NULL){
        printf("Memory alloc failed");
    }
    strcpy(cities[i],temp);
}
sort(cities,n);
printf("sorted cities names");
for(int i=0;i<n;i++){
    printf("%s \t",cities[i]);
}
for(int i=0;i<n;i++){
    free(cities[i]);
}
free(cities);
}