#include<stdio.h>
#include<conio.h>
int main()
{
	int num,rev,rem=0,temp;
	printf("Enter A Number");
	scanf("%d",&num);
	temp=num;
	while(num!=0)
	{
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	}
	printf("The Reverse of %d is %d",temp,rev);
	getch();
	return(0);
}