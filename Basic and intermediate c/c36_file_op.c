//Read integers from a file and write sorted results to another file (text mode).
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp1,*fp2;
    int arr[100],n=0,i,j,temp;
    fp1=fopen("input.txt","r");
    if(fp1==NULL){
        printf("Error in openig file 1");
        return 1;
    }
    while(fscanf(fp1,"%d",&arr[n])==1){
        n++;
    }
    fclose(fp1);

        for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    fp2=fopen("output.txt","w");
    if(fp2==NULL){
        printf("Error in opening file");
        return 1;
    }
    for(i=0;i<n;i++){
        fprintf(fp2,"%d ",arr[i]);
    }

    fclose(fp2);
    printf("Sorted numbers written to output.txt\n");
}
