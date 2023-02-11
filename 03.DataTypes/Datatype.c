#include<stdio.h>
#include<limits.h>
#include<float.h>
int main()
{
    //integer data type
    int a;
    a=1;
    printf("a = %d\n",a);
    //Max Value for int data type
    printf("%d\n", INT_MAX);
    //Min Value for int data type
    printf("%d\n", INT_MIN);
    //Float Data type
    float b;
    b=3.555;
    printf("%f\n",b);
    //Max Value for float data type
    printf("%14.7g\n",FLT_MAX);
    //Min Value for float data type
    printf("%14.7g\n",FLT_MIN);

    //char data type

    char c;
    c='h';
    printf("%c\n", c);
    printf("Size of char data type is 1 byte ie 8bits\n");

    //double data type
    double d;
    d=123123123.123567;
    printf("%lf\n", d);
    
}