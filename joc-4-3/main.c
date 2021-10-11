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
    int big1=A[0],loc1=0;
    int big2=B[0],loc2=0;
    for(int i=1;i<6;i++)
    {
        if(big1<A[i])
        {
        big1=A[i];
        loc1=i;
        }
        if(big2<B[i])
        {
        big2=B[i];
        loc2=i;
        }
    }
    switch(loc1)
    {
        case 0:printf("Mr.Int can party on monday\n");break;
        case 1:printf("Mr.Int can party on tuesday\n");break;
        case 2:printf("Mr.Int can party on wednesday\n");break;
        case 3:printf("Mr.Int can party on thursday\n");break;
        case 4:printf("Mr.Int can party on friday\n");break;
        case 5:printf("Mr.Int can party on saturday\n");break;
    }
    switch(loc2)
    {
        case 0:printf("Mr.Float can party on monday\n");break;
        case 1:printf("Mr.Float can party on tuesday\n");break;
        case 2:printf("Mr.FLoat can party on wednesday\n");break;
        case 3:printf("Mr.Float can party on thursday\n");break;
        case 4:printf("Mr.Float can party on friday\n");break;
        case 5:printf("Mr.FLoat can party on saturday\n");break;
    }
     return 0;
}
