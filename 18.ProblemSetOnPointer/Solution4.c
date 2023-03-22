#include <stdio.h>
int sum(int *ptr1, int *ptr2)
{
    return *ptr1 + *ptr2;
}
int avg(int *ptr1, int *ptr2)
{
    return (*ptr1 + *ptr2)/2;
}
int main()
{
    int num1;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    int num2;
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("The sum of two number is :%i\n",sum(&num1, &num2));
    printf("The avg of two number is :%i\n",avg(&num1, &num2));

}