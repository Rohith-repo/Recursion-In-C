#include<stdio.h>
int main()
{
    int N=1234;
    printf("%d ",Reverse(N));
}
int Helper(int N,int digits)
{
    if(N<10)
        return N;
    int Rem = N%10;
    return Rem * (pow(10,digits-1)) + Helper((N/10),digits-1);
}
int Reverse(int N)
{
    int digits = (int) log10(N) + 1;
    return Helper(N,digits);
}
