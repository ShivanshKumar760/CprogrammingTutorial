#include<stdio.h>
int Multiply(int num1,int num2)
{
    int result=num1*num2;
    return result;
}
int main()
{
    int number1=4;
    int number2=5;
    int result=Multiply(number1,number2);
    printf("%d\n",result);
}