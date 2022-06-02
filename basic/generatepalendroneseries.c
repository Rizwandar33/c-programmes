#include<stdio.h>
#include<conio.h>
 int main()
   {
   	int f,l,i,rem,rev=0,temp;
   	printf("Enter first and last term");
   	scanf("%d%d",&f,&l);
   	for(i=f;i<=l;i++)
   	{
   		temp=i;
   		while(i!=0)
   		{
   			rem=i*10;
   			rev=(rev*10)+i;
   			i=i/10;
		   }
		if(rev==temp)
		{
			printf("%d \n",temp);
		}
	   }
	   
	   getch();
	   return(0);
   }