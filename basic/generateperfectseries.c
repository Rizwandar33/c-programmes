#include<stdio.h>
#include<conio.h>
 int main()
   {
   	int first,last,i,num,s;
   	printf("Enter first term");
   	scanf("%d",&first);
   	printf("Enter last term");
   	scanf("%d",&last);
   	for(num=first;num<=last;num++);
   	{
   		s=0;
   		for(i=1;i<=num/2;i++)
   		{
   			if(num%i==0)
   			{
   				s=s+i;
			   }
		   }
		   if(num==s)
		   {
		   	printf("%d \t",num);
		   }
	   }
	   getch();
	   return(0);
   }