#include<stdio.h>

int main()
{
    //1.%d
    int a;
    a=6;
    int b;
    printf("a=%d\n",a);
    printf("Enter value of b:");
    scanf("%d",&b);
    printf("b=%d\n",b);

    //2.%u

    int d;
    d=105;
    int e=-105;
    printf("value of d when printed using format specifier percent d is d=%d\n",d);
    printf("value of e when printed using format specifier percent  d is e=%d\n",e);
    printf("value of d when printed using format specifier percent u is d=%u\n",d);
    printf("value of e when printed using format specifier percent u is e=%u\n",e);

    /*
    printf("value of d when printed using format specifier percent u is d=%u\n",d);
    printf("value of e when printed using format specifier percent u is e=%u\n",e);

    in above line of code ,we are displaying the value of b and c by using unsigned int format specifer ie %u,the value of 
    d is positive so %u specifier prints the exact value of d but since e is negative it does not print the exact value.

    */

   //3.%o
   int f=0100;
   printf("Octal Value of f is :%o\n",f);
   printf("integer value of f is :%d\n");

   //4/%x or %X
   int g=0xA;
   printf("Hexadecimal Value of g is:%x\n",g);
   printf("Hexadecimal value of g is :%X\n",g);
   printf("Integer value of g is:%i\n",g);

   //5.%f

   float h=3.4444;
   printf("Floating point value of h is :%f\n",h);

   //6.%e or %E
   float i=3;
   printf("Exponential value of i is:%e\n",i);
   printf("Exponential value of i is:%E\n",i);

   //7.%g 
   float j=3.8345;
   printf("Float value of j with percent g is:%.3g\n",j);

   //8.%p
   int k=5;
   printf("Address of k is in hexadecimal:%p\n",&k);

   //9.%c
   char l='s';
   printf("Value of l is :%c\n",l);

   //10.%s

   printf("%s\n","C programming");

   return 0;

   



}