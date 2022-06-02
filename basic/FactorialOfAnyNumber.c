#include<stdio.h>
#include<conio.h>
void main()
  {
  	int num,fac=1,temp;
  	printf("Enter A Number");
  	scanf("%d",&num);
  	temp=num;
  	while(num!=0)
  	{
  		fac=num*fac;
  		num--;
	  }
	  printf("Factorial of %d is %d",temp,fac);
	  getch();
  }