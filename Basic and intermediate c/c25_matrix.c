//Pass a 9x9 integer array to a function that checks if each row and column contains unique numbers from 1 to 9.
#include<stdio.h>
int check(int grid[][9]){
    int freq[10];
    int i,j,k;
      for(i=0;i<9;i++){
    for(k=1;k<=9;k++){
        freq[k]=0;
    }
    for(j=0;j<9;j++){
int num=grid[i][j];
if(num<1||num>9||freq[num]==1){
    return 0;
}
freq[num]=1;
    }
    } 
    for(j=0;j<9;j++){
           for(k=1;k<=9;k++){
        freq[k]=0;
    } 
    for(i=0;i<9;i++){
        int num=grid[i][j];
        if(num<1||num>9||freq[num]==1){
            return 0;
        }
            freq[num]=1;
    }

    }
        return 1;
}
int main()
{
    int grid[9][9] =
    {
        {1,2,3,4,5,6,7,8,9},
        {4,5,6,7,8,9,1,2,3},
        {7,8,9,1,2,3,4,5,6},
        {2,3,4,5,6,7,8,9,1},
        {5,6,7,8,9,1,2,3,4},
        {8,9,1,2,3,4,5,6,7},
        {3,4,5,6,7,8,9,1,2},
        {6,7,8,9,1,2,3,4,5},
        {9,1,2,3,4,5,6,7,8}
    };

    if(check(grid))
        printf("Valid\n");
    else
        printf("Invalid\n");

    return 0;}