/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[6]={560,660,590,760,480,960};
    float B[6]={97.50,66.0,79.25,76.55,98.45,96.40};
    char C[6]={'M','T','W','T','F','S'};
    printf("Day Mr.int  Mr.float \n");
    for(int i=0;i<6;i++)
    {
       
        printf("%c   %d  %f \n",C[i],A[i],B[i]);
    }
    printf("Day Mr.int  Mr.float \n");
    for(int i=5;i>=0;i--)
    {
       
        printf("%c   %d  %f \n",C[i],A[i],B[i]);
    }
    return 0;
}
    
