/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX 100
void printDigit(int N)
{
	int arr[MAX];
	int i = 0,c=0;
	int j, r;
    while (N != 0) 
	{
        r = N % 10;
        arr[i] = r;
		i++;c++;
        N = N / 10;
	}
	printf("the number of digits in the number is %d\n",c);
	printf("the digits in the number are:\n");
    for (j = i - 1; j > -1; j--) 
	{
		printf("%d \t", arr[j]);
	}
	printf("\nthe number after reversing the digits are:\n");
	for(j=0;j<i;j++)
	{
	    printf("%d",arr[j]);
	}
}
int main()
{
	int N;
	printf("enter the number:\t");
	scanf("%d",&N);
    printDigit(N);
	return 0;
}