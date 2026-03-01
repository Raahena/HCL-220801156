//Create a struct Student with fields for roll number, name, and marks. Write a program to input details for 5 students and display the topper’s details.

#include<stdlib.h>
#include<stdio.h>
typedef struct employees{
    char name[50];

    int salary;
}emp;
int  main(){
        int n=10;
    emp *e=(emp*)malloc(n*sizeof(emp));

    for(int i=0;i<n;i++){
        printf("Enter name of student %d: ",i+1);
        fgets(e[i].name,50,stdin);

        printf("Enter salary : " );
        scanf("%d",&e[i].salary);
        getchar();


    }
    int max=0;
    for(int i=0;i<n;i++){
        if(e[i].salary>e[max].salary){
            max=i;
        }
    }
    printf("%s%d",e[max].name,e[max].salary);

}