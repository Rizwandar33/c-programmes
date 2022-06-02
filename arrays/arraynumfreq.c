#include <stdio.h>
#include <conio.h>
int main()
 {
 	int a[20],i,n,num,count=0;
 	printf("Enter NO of Array elements \n");
 	scanf("%d",&n);
 	printf("Enter %d no of Array elements \n",n);
 	for(i=0;i<n;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("Enter no to check frequency");
	 scanf("%d",&num);
	 for(i=0;i<n;i++)
	 {
	 	if(num==a[i])
	 	{
	 		count=count+1;
		 }
	 }
	 printf(" %d",count);
	 getch;
	 return 0;
	 
 }