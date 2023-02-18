#include<stdio.h>
int main(void)
{
    int lenght=5;
    int breadth=4;
    for(int i=0; i<breadth; i++)
    {
        for(int j=0; j<lenght; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}