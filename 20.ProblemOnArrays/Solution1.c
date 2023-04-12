#include<stdio.h>

int main(void)
{
    int totalNumberOfStud;
    totalNumberOfStud = 5;
    int marks[totalNumberOfStud];
    int iterator=0;
    while(iterator<totalNumberOfStud)
    {   printf("Enter the marks for student[%d]:",iterator);
        scanf("%d",&marks[iterator]);
        iterator++;

    }

    for(int i=0; i<totalNumberOfStud; i++)
    {
        printf("%d\n",marks[i]);
    }
}