#include<stdio.h>
int main()
{
    int A=7;
    printf("%d ",fibbo(A));

}
int fibbo(int N)
{
    if(N<2)
        return N;
    return fibbo(N-1) + fibbo(N-2);
}