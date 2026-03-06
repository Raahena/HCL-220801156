//Implement a dynamic array that doubles its size when capacity is exceeded.
#include<iostream>
using namespace std;
int main(){
    int size=0;
    int capacity=2;
    int *arr= new int[capacity];
    int n,val;
    cout<<"Enter no of elements: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter element: ";
        cin>>val;
        if(size==capacity){
            capacity=capacity*2;
            int *newarr=new int[capacity];
            for(int j=0;j<size;j++)
            {
                newarr[j] = arr[j];
            }
            delete[] arr;
            arr=newarr;
        }
        arr[size]=val;
        size++;

    }
    cout<<"\nElements in dynamic array:\n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    delete[] arr;
}
