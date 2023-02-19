#include<stdio.h>

float average(int n1,int n2,int n3)
{
    float averageResult =(n1+n2+n3)/3.0;
    return averageResult;
}

int main()
{
    int n1,n2,n3;
    n1=2;
    n2=4;
    n3=5;
    
    printf("%.2f\n",average(n1,n2,n3));
}