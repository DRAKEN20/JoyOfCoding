/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h> 
void num(long n); 
int DigitsOfNumber(long n); 
int SumOfDigits(long n); 
 int main() 
{	int n; 
	printf("enter number="); 
	scanf("%d",&n); 
	num(n); 
} 
void num(long n) 
{	int a,s; 
	a=DigitsOfNumber(n); 
	if(a>1) 
	{ 
		s=SumOfDigits(n); 
		num(s);	 
	} 
	else 
		printf("sum as single digit=%d",n); 
} 
int DigitsOfNumber(long n) 
{ 
	int c=0; 
	while(n!=0) 
	{ 
		n=n/10; 
		++c; 
	} 
	return c; 
} 
int SumOfDigits(long n) 
{ 
	int remainder,sum=0; 
	while(n!=0) 
	{ 
		remainder=n%10; 
		sum=sum+remainder; 
		n=n/10; 
	} 
	printf("%d\n",sum); 
	return sum; 
}