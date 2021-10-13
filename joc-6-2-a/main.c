/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
 
int main() {
   char str1[100];
   char str2[100];
   char str3[100];
   int len;
 
   printf("\nEnter the String 1 : ");
   gets(str1);
 
   printf("\nEnter the String 2 : ");
   gets(str2);
 
   strcpy(str3, str1);
   strcat(str3, str2);
 
   printf("\nConcated String : %s", str3);
 
   return (0);
}