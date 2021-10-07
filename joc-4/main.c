/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("    short int is %2d bytes \n", sizeof(short int));
	printf("          int is %2d bytes \n", sizeof(int));
	printf("        int * is %2d bytes \n", sizeof(int *));
	printf("     long int is %2d bytes \n", sizeof(long int));
	printf("   long int * is %2d bytes \n", sizeof(long int *));
	printf("   signed int is %2d bytes \n", sizeof(signed int));
	printf(" unsigned int is %2d bytes \n", sizeof(unsigned int));
	printf("\n");
	printf("        float is %2d bytes \n", sizeof(float));
	printf("      float * is %2d bytes \n", sizeof(float *));
	printf("       double is %2d bytes \n", sizeof(double));
	printf("     double * is %2d bytes \n", sizeof(double *));
	printf("  long double is %2d bytes \n", sizeof(long double));
	printf("\n");
	printf("  signed char is %2d bytes \n", sizeof(signed char));
	printf("         char is %2d bytes \n", sizeof(char));
	printf("       char * is %2d bytes \n", sizeof(char *));
	printf("unsigned char is %2d bytes \n", sizeof(unsigned char));

    return 0;
}
