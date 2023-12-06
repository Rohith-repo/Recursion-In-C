#include<stdio.h>
int main()
{
    int N=5;
    PrintAllNum(N);
}
void PrintAllNum(int N)
{
    if(N==0)
        return;
    PrintAllNum(N-1);
    printf("%d ",N);
}