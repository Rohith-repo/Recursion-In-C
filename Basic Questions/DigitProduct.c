#include<stdio.h>
int main()
{
    int N=1234;
    printf("%d ",ProductDigit(N));
}
int ProductDigit(int N)
{
    if(N<10)
        return N;
    return ProductDigit(N/10) * (N%10);
}