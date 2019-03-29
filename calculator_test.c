#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<assert.h>


// Function prototype declaration
int addition(int a,int b);
int subtraction(int a,int b);
int multiplication(int a,int b);
int division(int a,int b);


// Start of Main Program
int main()
{
    int a,b;
    assert(addition(2,3)==5);
    assert(addition(2,-3)==-1);
    assert(addition(-2,-3)==-5);
    assert(subtraction(3,2)==1);
    assert(subtraction(3,-2)==5);
    assert(subtraction(-3,-2)==-1);
    assert(division(4,2)==2);
    assert(division(4,-2)==-2);
    assert(division(-4,-2)==2);
    assert(division(4,2)==2);
    assert(division(4,-2)==-2);
    assert(division(-4,-2)==2);
    //assert(division(-4,0)==2);
    printf("All test cases passed\n");
    return 0;
}
int addition(int a,int b)
{

    return a+b;
}

int subtraction(int a,int b)
{

    return a-b;
}

int multiplication(int a,int b)
{

    return a*b;
}

int division(int a,int b)
{
//if(b==0)
//{
//printf("cannot divide by zero\n");
//return;
//}
//else
    return a/b;
}
