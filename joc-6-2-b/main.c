/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
 
int main() {
   char str[100];
   int len;
 
   printf("\nEnter the String : ");
   gets(str);
 
   len = strlen(str);
 
   printf("\nLength of Given String : %d", len);
   return(0);
}