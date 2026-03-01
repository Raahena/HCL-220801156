//Use a pointer to a struct Student to update marks and print updated details. Demonstrate why passing by pointer is efficient compared to passing by value.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
    int rollno;
    char name[50];
    int marks;
}stu;
void passbyvalue(stu s){
    s.marks=s.marks+10;
    printf("%d passed using values",s.marks);
}

void passbyrefernce(stu *s){
    s->marks=s->marks+10;
    printf("%d passed by value",s->marks);
}
int main()
{
    stu s1;

    s1.rollno = 1;
    strcpy(s1.name, "Rahena");
    s1.marks = 80;

    printf("Before update:\n");
    printf("Name: %s Roll: %d Marks: %d\n", s1.name, s1.rollno, s1.marks);

    passbyvalue(s1);

    printf("\nAfter updateByValue (in main):\n");
    printf("Name: %s Roll: %d Marks: %d\n", s1.name, s1.rollno, s1.marks);


    
    passbyrefernce(&s1);

    printf("\nAfter updateByPointer (in main):\n");
    printf("Name: %s Roll: %d Marks: %d\n", s1.name, s1.rollno, s1.marks);

    return 0;
}