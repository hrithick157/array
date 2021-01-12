#include<stdio.h>
#include<conio.h>
void main()
    {
 
        int array[1000],i,number;
        printf("Enter the size of an array \n");
        scanf("%d", &number);
        printf("Enter the elements of the array \n");
 
        for(i=0;i<number;i++) 
        {
            scanf("%d",&array[i]);
        }
 
        printf("Even numbers:");
        for(i=0;i<number;i++) 
        {
            if(array[i]%2!=0) 
            {
                printf("%d \t",array[i]);
            }
        }
 
        printf("\n Odd numbers:");
        for(i=0;i<number;i++) 
        {
            if(array[i]%2!=0) 
            {
                printf("%d \t",array[i]);
            }
        }
 
    }
