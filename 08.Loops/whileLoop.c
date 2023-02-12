#include<stdio.h>

int main()
{
    int i=0;
    while(i<10)
    {
        printf("%d\n", i);
        i++;
    }
    printf("%d\n",i);//since i is declared in the main block its a global variable so value of i 
    //updated in while block will reflect in main block
}