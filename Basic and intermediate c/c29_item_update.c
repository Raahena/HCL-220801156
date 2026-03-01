//Allocate memory dynamically for struct Item array based on user input size. Implement add and delete operations safely.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Item
{
    int id;
    char name[50];
    float price;
}item;
void display(item *arr,int size){
        printf("\nItem List:\n");

    for(int i = 0; i < size; i++)
    {
        printf(" ID=%d Name=%s Price=%.2f\n",
         arr[i].id, arr[i].name, arr[i].price);
    }
}
item *add(item *arr,int *size){
item *temp;
temp=realloc(arr,(*size+1)*sizeof(item));
if(temp==NULL){
printf("memory alloc failed");return arr;}
arr=temp;
 printf("\nEnter new item details:\n");

    printf("Enter ID: ");
    scanf("%d", &arr[*size].id);
    getchar();
    printf("Enter Name: ");
    fgets(arr[*size].name, 50, stdin);
    arr[*size].name[strcspn(arr[*size].name,"\n")]='\0';
    printf("Enter Price: ");
    scanf("%f", &arr[*size].price);
    (*size)++;

    return arr;
}
item *deleteitem(item *arr,int *size){
    int index;
    printf("enter index to delete");
    scanf("%d",&index);
    if(index<0||index>=*size){
        printf("invalid index");
        return arr;
    }
    for(int i =index; i< *size-1; i++)
    {arr[i]=arr[i + 1];
    }
    item *temp;
    temp=realloc(arr,(*size-1)*sizeof(item));
    if(temp!=NULL){
        arr=temp;
    }
    (*size)--;
    return arr;
}
int main()
{
    int n;
    printf("Enter number of items: ");
    scanf("%d", &n);
    item *arr;
    arr=malloc(n*sizeof(item));
        for(int i = 0; i < n; i++)
    {
        printf("\nEnter ID: ");
        scanf("%d", &arr[i].id);
        getchar();
        printf("Enter Name: ");
        fgets(arr[i].name, 50, stdin);
        arr[i].name[strcspn(arr[i].name, "\n")] = '\0';
        printf("Enter Price: ");
        scanf("%f", &arr[i].price);
    }
        display(arr, n);
arr=add(arr,&n);
display(arr,n);
    arr = deleteitem(arr, &n);
    display(arr, n);
    free(arr);
}