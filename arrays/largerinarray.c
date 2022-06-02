#include <stdio.h>
#include <conio.h>
int main()
{
	int a[20],n,i,large;
	printf("Enter number of array elements");
	scanf("%d",&n);
	printf("Enter %d no of array elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	large = a[0];
	for (i=0;i<n;i++)
	{
		if (a[i]>large)
		{
			large=a[i];
		}
	}
	printf("%d is Larger",large);
	getch();
}