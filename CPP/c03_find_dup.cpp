//Given an array of integers, find and print all duplicate elements.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[n];
    int freq[100]={0};
    cout<<"Enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for(int i=0;i<100;i++){
        if(freq[i]>1){
            cout<<i<<" ";
        }
        
    }
    return 0;
}