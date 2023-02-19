#include<stdio.h>

void pattern(int n)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int n=4;
    pattern(n);
}