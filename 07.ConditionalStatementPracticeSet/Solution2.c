#include<stdio.h>

int main()
{
    int marks1=43;
    int marks2=56;
    int marks3=32;
    int total=marks1+marks2+marks3;
    if(total>=40&&marks1>=33&&marks2>=33&&marks3>=33)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Try hard next time u will definately succeed\n");
    }
}