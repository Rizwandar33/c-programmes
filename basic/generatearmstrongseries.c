#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int first,last,temp=0,r,p=0;
 	printf("Enter First term");
 	scanf("%d",&first);
 	printf("Enter Nth term");
 	scanf("%d",&last);
 	for( ;first<last;first++)
 	{ 
 	    temp=first;
 		while(first>0)
 		{
 			r=first%10;
 			p=p+r*r*r;
 			first=first/10;
		 }
		 if(temp==p)
		 {
		 	printf("%d",temp);
		 }
	 }
	 getch();
	 return(0);
 }