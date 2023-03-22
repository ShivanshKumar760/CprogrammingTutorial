#include<stdio.h>
//this function will not return the same address as that of i cause in printAddressByValue
// we have passed variable's value  into the function so function will create a new variable
// with same value pointing to different address
void printAddressByValue(int m)
{
    int *ptr = &m;
    printf("address is :%u\n",ptr);
}

//this function will return the same address as that of i cause in printAddressByReference
// we have passed variable's memory address into the function so function will point to
// same variable
void printAddressByReference(int *ptr)
{
    int *ptr2 = ptr;
    printf("Address is :%u\n",ptr2);
}
int main()
{
    int i=7;
    printf("Address of i is :%u\n",&i);
    printAddressByValue(i);
    printAddressByReference(&i);
}