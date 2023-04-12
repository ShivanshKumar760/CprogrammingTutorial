#include<stdio.h>

int main()
{
    int size;
    printf("Enter size :");
    scanf("%d", &size);
    int array[size];
    for(int i = 0; i < size; i++)
    {
        printf("Enter element[%d] : ",i);
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < size; i++)
    {
        printf("%d\n", array[i]);
    }

}