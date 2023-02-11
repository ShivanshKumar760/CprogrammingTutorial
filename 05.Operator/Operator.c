#include<stdio.h>

int main()
{
    //1.Arithmetic operators
    int num1 = 5;
    int num2 = 6;
        //i.Addition
        int sum=num1+num2;
        printf("%d\n",sum);
        //ii.Subtraction
        int subtraction=num2-num1;
        printf("%d\n",subtraction);
        //iii.Multiplication
        int multiplication=num1*num2;
        printf("%d\n",multiplication);
        //iv.Division
        int division=num2/2;
        printf("%d\n", division);
        //v.Remainder
        int remainder=num2%num1;
        printf("%d\n", remainder);
        //vi.post increment
        int incrementcase=10;
        int postincrement=incrementcase++;//this will store 10 and then increment its value 
        printf("%d\n",postincrement);//10
        printf("%d\n",incrementcase);//updated value of increment case is 11
        //vii.pre increment
        int preincrement=++incrementcase;//this will first encounter ++ as +1 and then incrementcase as 11 and store result value as 12
        printf("%d\n",preincrement);
        printf("%d\n",incrementcase);
    
    //2.Assignmet Operators 
    int x;
    x=4;//(=)equal to assignment operator assigns a value to a variable
    printf("%d\n",x);
    x+=3;//x=x+3
    printf("%d\n",x);
    x-=1;//x=x-1
    printf("%d\n",x);
    x*=2;//x=x*2
    printf("%d\n",x);
    x/=3;//x=x/3
    printf("%d\n",x);
    x%=3;//x=x%3
    printf("%d\n",x);

    //3.Comparision Operators
    int comp1=2;
    int comp2=3;
    int comp3=1;
    int comp4=2;
    printf("%d\n",comp1>comp2);//0--for false and 1 for true
    printf("%d\n",comp1<comp2);//0--for false and 1 for true
    printf("%d\n",comp2>=comp3);//0--for false and 1 for true
    printf("%d\n",comp1==comp4);//0--for false and 1 for true

    //4.Logical operator 
    int log1=5;
    int log2=6;
    int log3=7;
    int log4=8;
        //i)&&--logical and
        /*Logical and	Returns true if both statements are true	x < 5 &&  x < 10*/
        printf("logical and:%d\n",log1<log2&&log2<log3);
        //ii)|| or --logical or
        /*Logical or	Returns true if one of the statements is true	x < 5 || x < 4*/
        printf("logical or:%d\n",log1<log2||log2>log3);

        //iii)! --logical not
        /*Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)*/
        printf("Logical not:%d\n",!1);

}