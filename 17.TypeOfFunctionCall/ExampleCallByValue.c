#include<stdio.h>
int add1(int x)
{
    x=(x+1);
    return x;
}
int main()
{
    int a=1;
    printf("%d\n",add1(a));
    printf("%d\n",a);
}