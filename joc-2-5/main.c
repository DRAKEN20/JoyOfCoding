/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,s;
    printf("enter the number of books:\n");
    scanf("%d",&n);
 if(n<=10000)
    {
        printf("no discount!!");
        printf("the total cost is %d ",10*n);
    }
    else if(n>10000&&n<=15000)
    {
        printf("10 percent discount!!");
        s=(10*n)-n;
        printf("the total cost is %d ",s);
    }
    else if(n>15000&&n<=20000)
    {
        printf("20 percent discount!!");
        s=(10*n)-(2*n);
        printf("the total cost is %d ",s);
    }

   
    return 0;
}