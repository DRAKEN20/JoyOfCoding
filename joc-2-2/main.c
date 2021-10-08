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
    int n,A[10];
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }

    for(int i=0;i<n;i++){
        if(A[i]<0)
        {
            printf("Invalid input");
            exit(0);
            
        }
    }
    int max=A[0];
    for(int i=0;i<n;i++)
    {
       if(A[i]>max)
        {
            max=A[i];
        }
    }
        printf("The largest is %d",max); 
    
    return 0;
}