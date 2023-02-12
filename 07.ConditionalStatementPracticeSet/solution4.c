#include<stdio.h>

int main()
{
    int n1=4;
    int n2=3;
    int n3=6;
    int n4=9;

    if(n1>n2)
    {
        if(n1>n3)
        {
            if(n1>n4)
            {
                printf("n1 is greater");
            }
        }
        else if(n3>n1)
        {
            if(n3>n4)
            {
                printf("n3 is greater");
            }
            else
            {
                printf("n4 isss  greater");
            }
        }
    }
    else if(n2>n1)
    {
        if(n2>n3)
        {
            if(n2>n4)
            {
                printf("n2 is greater");
            }
            else
            {
                printf("n4 is greater");
            }
        }
        else if(n3>n1)
        {
            if(n3>n4)
            {
                printf("n3 is greater");
            }
            else
            {
                printf("n4 is  greater");
            }
        }
        
    }
}