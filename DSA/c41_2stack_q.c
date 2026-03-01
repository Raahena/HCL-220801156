//Implement a queue using two stacks; analyze amortized complexity.
#include<stdio.h>
#define MAX 100
int s1[MAX],s2[MAX];
int top1=-1, top2=-1;
void push1(int val){
    s1[++top1]=val;

}
void push2(int val){
    s2[++top2]=val;
}
int pop1(){
    return s1[top1--];
}
int pop2(){
    return s2[top2--];
}
void enqueue(int val){
    push1(val);
    printf("Enqueued:%d \n",val);
}
int dequeue(){
    if(top1==-1&&top2==-1){
        printf("Empty");
        return -1;
    }
if(top2==-1){
    while(top1!=-1){
        push2(pop1());
    }
}
return pop2();
}
void display()
{
    printf("Queue: ");

    for(int i = top2; i >= 0; i--)
        printf("%d ", s2[i]);

    for(int i = 0; i <= top1; i++)
        printf("%d ", s1[i]);

    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();
    printf("Dequeued %d\n", dequeue());
    display();
    enqueue(40);
    display();
    printf("Dequeued %d\n", dequeue());
    display();

    return 0;
}