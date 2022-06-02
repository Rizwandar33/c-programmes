#include<stdio.h>
#include<conio.h>
 void main()
   {
   	int a[6],i,s=0;
   	printf("Enter array elements for sum \n ");
   	for(i=0;i<6;i++)
   	{
	   scanf("%d",&a[i]);
      }
      for(i=0;i<6;i++)
      {
      	s=s+a[i];
	  }
	  printf("The sum of an array is %d",s);
	  getch();
   }