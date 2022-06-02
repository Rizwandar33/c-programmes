#include<stdio.h>
#include<conio.h>
void main()
  {
  	int a,b,c,i,lt;
  	printf("Enter Nth Term");
  	scanf("%d",&lt);
  	a=0;
  	b=1;
  	c=0;
  	while(c<=lt)
  	  {
  	  	printf("%d \n",c);
  	  	a=b;
  	  	b=c;
  	  	c=a+b;
		}
    getch();
  }