#include<stdio.h>
#include<stdbool.h>

bool linearsearch(int arr[],int key,int N,int index)
{
    if(arr[index]==key)
        return true;
    if(index>N-1)
        return false;
    return linearsearch(arr,key,N,index+1);
}

int main()
{
    int N=6, arr[] = {1,2,3,4,5,6} , key = 8 , index =0;
    if(linearsearch(arr,key,N,index))
        printf("Found");
    else
        printf("Not Found");
}