#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,r,s=0;
	printf("Enter a Number");
	scanf("%d",&num);
	while(num!=0)
	{
		r=num%10;
		s=s+r;
		num=num/10;
	}
	printf("The sum of digits of a number is %d",s);
    getch();
	return(0);	
}
