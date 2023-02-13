//do while
#include<stdio.h>

int main()
{
    int i=1;
    int n=10;
    int sum=0;
    do
    {
        sum+=i;
        i++;
    }while(i<=n);
    printf("%d\n",sum);
}