#include<stdio.h>
#include<conio.h>
 void main()
 {
 	int i,j,k,n=5;
 	for(i=0;i<n;i++)
 	{
 		for(k=0;k<n-i;k++)
 		{
 			printf(" ");
		 }
		 for(j=0;j<=i;j++)
		 {
		 	printf("*");
		 }
		 printf("\n");
	 }
	 getch();
 }