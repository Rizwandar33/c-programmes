#include<stdio.h>
#include<conio.h>
void main()
  {
  	int base,power,i,p=1;
  	printf("Enter base");
  	scanf("%d",&base);
  	printf("Enter power");
  	scanf("%d",&power);
  	for(i=0;i<power;i++)
  	{
  		p=p*base;
	  }
	  printf("Product is : %d",p);
	  
	  getch();
  }
  