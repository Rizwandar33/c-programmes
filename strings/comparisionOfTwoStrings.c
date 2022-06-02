#include<stdio.h>
#include<conio.h>
#include<string.h>
  void main()
   {
   	char str1[10],str2[10];
   	int i, flag=0 ;
   	printf("Enter first String");
   	gets(str1);
   	printf("Enter Secound String");
   	gets(str2);
   	i=0;
   	while(str1[i]!='\0' || str2[i]!='\0')
   	{
   		if(str1[i]!=str2[i])
   		{
   			flag=1;
   			break;
		   }
		   i++;
	   }
	   if(flag==0)
	   {
	   	printf("The two strings you entered are same");
	   }
	   else
	   {
	   	printf("The two strings you have entered are not same"); 
	   }
	   getch();
   }