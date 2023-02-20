#include<stdio.h>

int sumOfN_naturalNum(int n)
{
    if(n==1)
        return 1;
    else
        return n+sumOfN_naturalNum(n-1);
}

int main()
{
    int n=5;
    printf("%d\n",sumOfN_naturalNum(n));
}