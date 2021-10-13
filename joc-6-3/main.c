/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
int main()
{
char str[100],*ptr,i,l;
printf("Enter any string\n");
gets(str);
l=strlen(str);
ptr=str;
printf("%c",*(ptr+0));
for(i=1;i<l;i++)
{
if(*(ptr+i-1)==' ')
printf(" %c ",*(ptr+i));
}
}