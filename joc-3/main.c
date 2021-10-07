/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a = 5, b = 5, c = 10, result;
   result = (a == b) && (c > b);
   printf("(a == b) && (c > b) is %d \n", result);
   result = (a == b) && (c < b);
   printf("(a == b) && (c < b) is %d \n", result);
   result = (a == b) || (c < b);
   printf("(a == b) || (c < b) is %d \n", result);
   result = (a != b) || (c < b);
   printf("(a != b) || (c < b) is %d \n", result);
   result = !(a != b);
   printf("!(a != b) is %d \n", result);
   result = !(a == b);
   printf("!(a == b) is %d \n", result);
    return 0;
}
