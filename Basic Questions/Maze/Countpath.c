#include<stdio.h>

int CountPath(int row , int col)
{
    if(row==1 || col==1)
        return 1;
    
    int left = CountPath(row-1,col);
    int right = CountPath(row,col-1);
    return left+right;
}

int main()
{
    printf("The Possible Count to Reach Goal is : %d",CountPath(3,3));
}