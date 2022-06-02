#include<stdio.h>
#include<conio.h>
 void main()
   {
   		int num,i,flag=0;
   	printf("Enter a number to check whether it is prime or not");
   	scanf("%d",&num);
   	for(i=2;i<num;i++)
    {
    		if(num%i==0)
    	{
    		flag=1;
    		break;
   		}
	}
	if(flag==1)
	{
		printf("The number %d is not a prime number",num);
	}	
    else 
    {
    	printf("The number %d is a  prime number",num);
	}  	
	getch();
   }
   
      
  
    

