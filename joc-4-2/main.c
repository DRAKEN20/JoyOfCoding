/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    
    int A[6]={560,660,590,760,480,960};
    float B[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    char C[6]={'M','T','W','T','F','S'};
    int i,sum=0;
    float avg;
    for(i=0;i<6;i++)
    {
        sum=sum+A[i];
    }
    avg=sum/6;
    printf("the weekly wage of Mr.Int is %d\n",sum);
    printf("the average wage of Mr.Int is %f\n",avg);
    
     for(i=0;i<6;i++)
    {
        sum=sum+B[i];
    }
    avg=sum/6;
    printf("the weekly wage of Mr.Float is %d\n",sum);
    printf("the average wage of Mr.Float is %f\n",avg);
    return 0;
}
