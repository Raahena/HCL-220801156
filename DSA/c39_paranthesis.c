//Use a stack to check balanced parentheses/brackets in an expression.
#include<stdio.h>
#include<stdlib.h>
struct Node{
    char ch;
    struct Node *next;
};
struct Node *top=NULL;
void push(char ch){
struct Node *s=(struct Node *)malloc(sizeof(struct Node));
s->ch=ch;
s->next=top;
top=s;
}
char pop(){
    if(top==NULL){
        printf("stack empty");
    }
    char ch=top->ch;
    struct Node *temp=top;
    top=top->next;
    free(temp);
    return ch;
}
int match(char a,char b){
    if((a=='(')&&(b==')'))return 1;
    if((a=='[')&&(b==']'))return 1;
    if((a=='{')&&(b=='}'))return 1;
    return 0;
}
int main(){
char exp[]="{[()]}";
for(int i=0;exp[i]!='\0';i++){
if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
push(exp[i]);
else if(exp[i]==')' || exp[i]=='}' || exp[i]==']')
{
    char p=pop();

    if(!match(p,exp[i]))
    {
        printf("Not Balanced");
        return 0;
    }
}
}
if(top==NULL){
    printf("balanced");

}else
printf("Unbalanced");
}