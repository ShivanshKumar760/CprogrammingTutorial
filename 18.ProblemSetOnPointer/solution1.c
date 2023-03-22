#include<stdio.h>

int main(void)
{
    int variable1=78;
    int *pointerOfVaraible1= &variable1;
    printf("Address of variable 1 is =%u\n", pointerOfVaraible1);
    printf("Value of variable 1 is =%i\n",*pointerOfVaraible1);
    return 0;
}