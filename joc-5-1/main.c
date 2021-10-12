/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define MAX_SIZE 100

int main()
{
   int arr[MAX_SIZE];
    int i, size, num,high,low,loc;

   
    printf("Enter size of the array : ");
    scanf("%d", &size);

    
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to insert : ");
    scanf("%d", &num);
    printf("enter the two elements in btween which it has to be inserted:\n");
    scanf("%d %d",&high,&low);
    for(i=0;i<size;i++)
    {
        if(arr[i]==low)
        {
            loc=i+1;
        }
    }
     for(i=size; i>=loc; i--)
        {
            arr[i] = arr[i-1];
        }
        
       
        arr[loc-1] = num;
        size++;
         printf("Array elements after insertion : ");
        for(i=0; i<size; i++)
        {
            printf("%d\t", arr[i]);
        }
    return 0;
}
