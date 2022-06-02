#include<stdio.h>
#include<conio.h>
 void main()
   {
   	int a[10],i;
   	printf("Enter Array Elements Upto 10 \n");
   	for(i=0;i<10;i++)
   	{
   		scanf("%d",&a[i]);
	   }
	   printf("you have entered these elements");
	   for(i=0;i<10;i++)
	   {
	   	printf("%d \n",a[i]);
	   }
    getch();
   }