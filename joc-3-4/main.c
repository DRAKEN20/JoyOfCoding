/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 100
void printDigit(int N);
int main()
{
	int N;
	printf("enter the number:\t");
	scanf("%d",&N);
    printDigit(N);
	return 0;
}
void printDigit(int N)
{
	int arr[MAX];
	int i = 0;
	int j, r;
    while (N != 0) 
	{
        r = N % 10;
         N = N / 10;
        if(r!=0)
        {
        arr[i] = r;
		i++;
        }
        else 
        continue;
	}
		printf("the digits in the number without zero's are:\n");
    for (j = i - 1; j > -1; j--) 
	{
		printf("%d,", arr[j]);
	}
}