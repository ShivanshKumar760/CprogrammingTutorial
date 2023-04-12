#include<stdio.h>

int main()
{
    int n=3;
    //declare arrat data type
    int /*declare array name*/ num[/*size*/n];

    /*
    This gives error:

int len;
scanf("%d",&len);
char str[len]="";
This also gives error:

int len=5;
char str[len]="";
But this works fine:

int len=5;
char str[len]; //so the problem lies with assignment not declaration
You need to put value in the following way:

str[0]='a';
str[1]='b'; //like that; and not like str="ab";*/
    num[0]=1;
    num[1]=2;
    num[2]=3;


    char letters[3]={'a', 'b', 'c'};
    int random[]={6,7,8,9};

    for(int i=0;i<n;i++)
    {
        printf("%d\n",num[i]);
    }
}