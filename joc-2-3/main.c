/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int a, b, c;
    char op;
    printf("Enter an expression (a+b)\n");
    scanf("%d %c %d",&a,&op,&b);
    switch(op)
{
    case'+':
    c=a+b;
    printf("sum=%d",c);
    break;
    
    case'-':
    c=a-b;
    printf("Difference=%d",c);
    break;
    
    case'*':
    c=a*b;
    printf("Product=%d",c);
    break;
    
    case'/':
    if(b==0)
    {
        printf("Invalid");
        break;
    }
    else
    c=a/b;
    printf("Division=%d",c);
    break;
    
    case'%':
    if(b==0)
    {
        printf(a);
    }
    else
    c=a%b;
    printf("Modulus=%d",c);
    break;



}
   
}