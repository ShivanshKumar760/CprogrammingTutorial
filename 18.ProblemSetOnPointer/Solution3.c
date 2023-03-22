#include<stdio.h>
int update(int *ptr)
{
    return ((*(ptr))*10);
}
int main()
{
    int number = 2;
    printf("Updated value is %d\n",update(&number));

}