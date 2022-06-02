#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int i,j,f,l,flag;
     printf("Enter first & last Term \n");
	 scanf("%d%d",&f,&l);
	 for(i=f;i<=l;i++)
	   { 
	     flag=0;
	   	for(j=2;j<i;j++)
	   	{
	   		if(i%j==0)
	   		{
	   			flag=1;
	   			break;
			   }
		   }
		   if(flag==0)
		   {
		   	printf("%d \n",i);	
		   }
			} 
	getch();	
 }