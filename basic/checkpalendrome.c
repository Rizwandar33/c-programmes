#include<stdio.h>
#include<conio.h>
void main()
 {
 	int num,i,r,rev=0,temp=0;
 	printf("Enter A Number To check whether a Number is palendrome or not");
 	scanf("%d",&num);
 	temp=num;
 	while (num!=0)
 	{
 		r=num%10;
 		rev=(rev*10)+r;
 		num=num/10;
 	 }
 	 if(temp==rev)
 	 {
 	 	 printf("The number %d is a palendrome number",temp);
	  }
	  else 
	  {
	  	 printf("The number %d is not a palendrome number",temp);
	  }
	  getch();
	  }