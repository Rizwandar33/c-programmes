#include<stdio.h>
#include<conio.h>
 void main()
   {
   	int a[10],i,j,temp=0,n=10;
   	printf("Enter array elements\n");
   	for(i=0;i<10;i++)
     {
     	scanf("%d",&a[i]);
	 }
	 printf("Array before swapping \n");
	 for(i=0;i<10;i++)
	 {
	 	printf("%d \t",a[i]);
	 }
	 for(i=0,j=n-1;i<=n/2;i++,j--)
	 {
	 	temp=a[i];
	 	a[i]=a[j];
	 	a[j]=temp;
	 }
	 printf("\n Array after swapping \n");
	 for(i=0;i<10;i++)
	 {
	 	printf("%d \t",a[i]);
	 }
	 getch();
   }