//Create a struct Student with fields for roll number, name, and marks. Write a program to input details for 5 students and display the topper’s details.

#include<stdlib.h>
#include<stdio.h>
typedef struct students{
    char name[50];
    int roll;
    int marks;
}s;
int  main(){
    s *stu=(s*)malloc(5*sizeof(s));
    int n=5;
    for(int i=0;i<n;i++){
        printf("Enter name of student %d",i+1);
        fgets(stu[i].name,50,stdin);
        printf("Enter roll no: ");
        scanf("%d",&stu[i].roll);
        printf("Enter marks : " );
        scanf("%d",&stu[i].marks);
        getchar();


    }
    int max=0;
    for(int i=0;i<n;i++){
        if(stu[i].marks>stu[max].marks){
            max=i;
        }
    }
    printf("%s%d",stu[max].name,stu[max].marks);

}