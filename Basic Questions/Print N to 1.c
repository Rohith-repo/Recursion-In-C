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
    printf("%d ",N);
    PrintAllNum(N-1);
}