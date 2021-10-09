/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
void printDigit(int N)
{
	
	int i = 0,sum=0;
	int j, r;
    while (N != 0) 
	{
        r = N % 10;
        if(r==9)
        {
           sum=sum+pow(10,i)*0; 
        }
        else
    
        sum=sum+pow(10,i)*(r+1);
        i++;
        N = N / 10;
        
	}
	printf("the PIN is:\n");
		printf("%d",sum);

}
int main()
{
	int N;
	printf("enter the PIN:\t");
	scanf("%d",&N);
    printDigit(N);
	return 0;
}

