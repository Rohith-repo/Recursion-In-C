#include<stdio.h>
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int target = 9,end,start;
    printf("%d ",BinarySearch(arr,target,start=0,end = (sizeof(arr)/sizeof(arr[0]))));
}

int BinarySearch(int arr[],int target , int start ,int end)
{
    if (start > end)
        return -1;
    int mid = start + (end-start)/2;
    if (arr[mid]==target)
        return mid;
    if (target < arr[mid])
        return BinarySearch(arr,target,start,end=mid-1);
    return BinarySearch(arr,target,start=mid+1,end);
}