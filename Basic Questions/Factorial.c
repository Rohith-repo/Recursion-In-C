#include<stdio.h>
int main()
{
    int N=5;
    printf("%d ",Fact(N));
}
int Fact(int N)
{
    if(N == 1)
        return 1;
    return N * Fact(N-1);
}