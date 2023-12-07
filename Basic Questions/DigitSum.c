#include<stdio.h>
int main()
{
    int N=1234;
    printf("%d ",SumDigit(N));
}
int SumDigit(int N)
{
    if(N<10)
        return N;
    return SumDigit(N/10) + (N%10);
}