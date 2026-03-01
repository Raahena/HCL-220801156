//8.Write a program to merge two sorted arrays into a single sorted output.

#include <stdio.h>
void sorted(int arr1[],int arr2[],int n1,int n2){
    int i=0,j=0,k=0;
    int merged[n1+n2];
    while(i<n1&&j<n2){
        if(arr1[i]<arr2[j]){
            merged[k++]=arr1[i++];
        }
        else{
            merged[k++]=arr2[j++];
        }
    }
    while(i<n1){
        merged[k++]=arr1[i++];
    }
        while(j<n2){
        merged[k++]=arr2[j++];
    }
    for(int  i=0;i<n1+n2;i++){
        printf("%d ",merged[i]);
}}
int main() {
int arr1[]={1,3,5,7,9};
int n1=5;
int arr2[]={2,4,6,8};
int n2=4;
sorted(arr1,arr2,n1,n2);
return 0;
}

