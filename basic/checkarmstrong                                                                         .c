#include<stdio.h>
#include<conio.h>
 void main()
   {
   	int num,i,temp,r,s=0;
   	printf("Enter the number to check whether a number is armstrong or not");
   	scanf("%d",&num);
   	temp=num;
   	 while(num!=0)
   	 {
   	 	r=num%10;
   	 	s=s+r*r*r;
   	 	num=num/10;
		}
	 if(s==temp)
	 {
	 	printf("The number you have Entered %d is armstrong",temp);
	 }
	 else
	  {
	  	printf("The number you have entered %d is not armstrong",temp);
	  }
	      getch();		
   }