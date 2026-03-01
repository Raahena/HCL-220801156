//Program to find the position of a target value within an array using linear search. 
#include<stdio.h>
#include<stdlib.h>
int linearsearch(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
    return 0;
}
int main(){
    int arr[]={2,5,7,3,8};
    int n=5;
    int k=3;
    int j=linearsearch(arr,n,k);
    if(j){
        printf("found at: %d",j);

    }
    else{
        printf("Not found");
    }
}