//Program that sorts numbers using the QuickSort method.
#include<stdio.h>
void swap(int *a ,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low,int high){
    int pivot=low;
    int i=low+1;
    int j=high;
while(1){
    while(i<=high&&arr[i]<arr[pivot])
    i++;
    while(j>=low&&arr[j]>arr[pivot])
    j--;
    if(i<j)
    swap(&arr[i],&arr[j]);
    else
    break;
}
    swap(&arr[pivot],&arr[j]);
    return j;

}
void quicksort(int arr[],int low,int high){
    if(low<high){
    int p=partition(arr,low,high);
    quicksort(arr,low,p-1);
    quicksort(arr,p+1,high);
}}
int main(){
int arr[]={5,2,6,9,3,1,7};
int n=7;
quicksort(arr,0,n-1);
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}