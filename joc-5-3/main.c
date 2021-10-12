/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
 #include<stdio.h>
#include<conio.h>

 int main()
 {
  int i,arr[20],j,no,check=0;
  
  printf("Enter size of array: ");
  scanf("%d",&no);
  printf("Enter any %d elements in array: ",no);
  for(i=0;i<no;i++)
  {
   scanf("%d",&arr[i]);
  }
 
  for(i=0; i<no; i++)
   {
    for(j=i+1;j<no;j++)
    {
      if(arr[i]==arr[j])
      {
        check=1;
      }
   
   }
  
 }
        
   if(check==1)
   {
       printf("Array consists of duplicates");
   }
   else
   {
       printf("Array consists of unique elements");
   }
   
 return 0;
 }