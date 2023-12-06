#include<stdio.h>
int main()
{
    int N=2;
    printf("%d ",Sum(N));
}
int Sum(int N)
{
    if (N==1)
        return 1;
    return N + Sum(N-1);
}