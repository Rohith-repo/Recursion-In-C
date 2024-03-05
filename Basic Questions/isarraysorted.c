#include<stdio.h>
#include<stdbool.h>

bool isarraysorted(int arr[],int N , int index)
{
    if(index==N-1)
        return true;
    return (arr[index]<arr[index+1]) && isarraysorted(arr,N,index+1);
}

int main()
{
    int N = 6 , index = 0 ,  arr[] = {1,2,3,7,5,6};
    if(isarraysorted(arr,N,index))
        printf("Yes");
    else
        printf("No");
}