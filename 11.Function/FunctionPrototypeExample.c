#include<stdio.h>
void display();//function prototype
int main()
{
    display();//function call will redirect to function prototype here
}

void display()
{//function defination 
    printf("Hey");
}