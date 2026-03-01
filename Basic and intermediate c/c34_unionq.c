#include<stdio.h>
#include<string.h>
union data{
int a;
float b;
char str[20];

};
struct dat{
    int a;
    float b;
    char str[20];
};
int main(){
union data u;
struct dat s;
 u.a = 10;
    printf("Union integer: %d\n", u.a);

    u.b = 3.14;
    printf("Union float: %.2f\n", u.b);

    strcpy(u.str, "Hello");
    printf("Union string: %s\n", u.str);


    s.a = 10;
    s.b = 3.14;
    strcpy(s.str, "Hello");

    printf("\nStructure values:\n");
    printf("Integer: %d\n", s.a);
    printf("Float: %.2f\n", s.b);
    printf("String: %s\n", s.str);
}
