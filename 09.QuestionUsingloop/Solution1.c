#include<stdio.h>

int main()
{
    int n;
    n=10;
    int i=1;
    int count=0;
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("%d\n", i);
            count++;
        }
        i++;

    }
    printf("%d\n", count);
}