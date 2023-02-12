#include<stdio.h>

int main()
{
    int year=1980;
    if(year%4==0)
    {
        printf("Leap year: %d\n",year);
    }
    else if(year%100==0)
    {    
        printf("not leap year: %d\n",year);
    }
    else if(year%400==0)
    {
        printf("leap year: %d\n",year);
    }
    else
        printf("not leap year: %d\n",year);
}