#include<stdio.h>
#include<conio.h>
 int main()
   {
   		int num,i,s=0;
   		printf("Enter a Number");
   		scanf("%d",&num);
   		for(i=1;i<num;i++)
   		{
   			if(num%i==0)
   			{
   				s=s+i;
			   }
		   }
		    if(s==num)
			   {
			   	printf("The number you have entered is perfect number");
			   }
			   else 
			   {
			   	printf("The number you have entered is not perfect number");
			   }
		getch();
		return(0);
   }