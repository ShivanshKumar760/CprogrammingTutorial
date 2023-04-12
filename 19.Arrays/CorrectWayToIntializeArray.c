#include<stdio.h>

int main()
{
    /* so lets understand the correct way to declare a array in c

    1.Declaring a array with variable size in size parameter if we pass a variable like this:
        int size;
        size = 3;
        int number[size];

        in this type of array we cant intialize value of array int the same line as of decalration of variable

        int number[size]={1,2,3};//will give error 

    In its current form, the size of the array is not known at compile time. 
    This requires either using a VLA (and figuring out where that error message is coming from), 
    using malloc, or allocating a constant-size array that's big enough for any expected use and 
    using only the initial portion of it. The following applies to the question as it was originally written.
    C90 required the length of an array to be a constant expression (something that can be evaluated at compile time). 
    C99 introduced variable length arrays. C11 made VLAs optional.

    Your code is invalid in C90, valid in C99, and conditionally valid in C11.

    But given what you've shown us, you don't need a variable length array.

    You have:

    int totalSize = 8; 
    char totalString[totalSize];
    totalSize is not a constant. (And defining it as const wouldn't make it a constant, for complicated reasons I won't go into.) But the size of your array is always going to be 8.

    You can just write:

    char totalString[8];
    but that's poor style. It can make it difficult to determine just what you have to modify if your requirements change.

    You can do this:

    #define TOTALSIZE 8
    char totalString[TOTALSIZE];
    (The convention is to use all-caps for macro names.)

    Or you can play this trick with an enum to create a named constant of type int:

    enum { TotalSize = 8 };
    char totalString[totalSize];
    Or, possibly, you can keep your code as it is (I'd add a const to the definition of totalSize if its value should never change) and figure out why you're getting that diagnostic message. You haven't told us what compiler you're using, or whether the message is from the compiler or some other tool. You certainly don't need a VLA in this context, but you might still be able to use one.
    }



    or we can define array in one line and give value to array in another line via indexing

    int number[size];
    number[0] =1;
    number[1] =2;
    number[2] =3;

    this will work fine without any error 


    2.Declaring array with size as constant number 
    So unlike variable sixed array in C we can decalare array with constant number size and give value to it in same line.

    int number[3]={1,2,3}; //this will work fine without any error

    3.Declaring array with no size .

    int num[]={1,2,3};//this will also work perfectly fine cause at compile time compiler will count the number of element and
    //allocate it to num array by itself.

    */

   int size=4;
   int number[size];

   number[0]=1;
   number[1]=2;
   number[2]=3;
   number[3]=4;

   for(int i=0;i<size;i++)
   {
    printf("%d\n",number[i]);
   }

    printf("another array\n");
   char letter[4]={'a','b','c','d'};
   int  size2=sizeof(letter)/sizeof(char);

   for(int i=0;i<size2;i++)
   {
    printf("%c\n",letter[i]);
   }
   printf("another array\n");

   float point[]={1.2,4.5,6.7,8.8,7.9,1.0};
   int  size3=sizeof(point)/sizeof(float);
   for(int i=0;i<size2;i++)
   {
    printf("%f\n",point[i]);
   }

}
