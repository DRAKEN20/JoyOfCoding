/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n;
    printf("enter the rank");
    scanf("%d",&n);
    if(n<=3250)
    {
        printf("YOU WILL GET IN ALL BRANCHES");
        
    }
 else if(n>3250 && n<=6505)
 {
     printf("YOU WILL GET IN ISE EC AND MEC");
     
 }
 else if(n>6505 && n<=12012)
 {
     printf("YOU WILL GET IN EC AND MEC");
     
 }
 else if(n>12012 && n<=22340)
 {
     printf("YOU WILL GET IN MEC");
 }
 else{
     printf("SEAT IS NOT AVILABLE IN RNSIT");
 }
return 0;
}