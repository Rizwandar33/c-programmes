#include<stdio.h>
#include<conio.h>
 void main()
   {
     	int arr[10],i,j,temp=0,n=10;
  	printf("Enter Array Elements Upto 10 \n");
   	for(i=0;i<10;i++)
   	{
   		scanf("%d",&arr[i]);
	   }
	   for(i=0;i<n-1;i++)
	   {
  	for(j=0;j<n-i-1;j++)   

    {    

            if(arr[j] > arr[j + 1])
			{

                temp = arr[j];

                arr[j] = arr[j + 1];

                arr[j + 1] = temp;

            }

        }

    }
	   	 printf("Array Elements After sorting");
	   for(i=0;i<10;i++)
	   {
	   	printf("%d \t",arr[i]);
	   }
	  
    getch();
   }