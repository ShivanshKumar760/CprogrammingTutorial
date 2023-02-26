#include<stdio.h>
int main()
{
    int i=8;
    int *j;
    j=&i;

    printf("Addrs of i is :%u\n",j);
    printf("Addrs of i is :%u\n",&i);
    printf("Value of i is :%d\n",*j);
    printf("Value of i is :%d\n",*(&i));
}