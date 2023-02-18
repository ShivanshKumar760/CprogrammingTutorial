#include<stdio.h>
int main(void)
{
    int len=5;
    int breadth=4;
    for (int i=1; i<=breadth; i++)
    {
        for(int j=1; j<=len; j++)
        {
            if(i==1 || i==breadth ||j==1||j==len )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}