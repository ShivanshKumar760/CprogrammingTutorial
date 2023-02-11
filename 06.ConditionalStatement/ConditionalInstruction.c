#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (x == 5)
    { 
        printf("x is 5\n");
    }
    else if(x==6)
    {
        printf("x is 6\n");
    }
    else
    {
        printf("x is neither 5 nor 6\n");
    }
    switch (x)
    {
    case 5:
        printf("%d\n",5+1);
        break;
    case 6:
        printf("%d\n",6+1);
        break;
    default: printf("nothing");break;

    }
}