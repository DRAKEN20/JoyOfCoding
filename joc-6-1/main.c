/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main( )
{
    int c;
    char gender;
    int age;char str[100];

    printf("Enter a character:\n");
    c = getchar();
     putchar(c);
    printf("Enter your age and then gender(M, F or O): ");
    scanf("%d %c", &age, &gender);
    
    printf("You entered: %d and %c\n", age, gender);
   
    
    getch();
}