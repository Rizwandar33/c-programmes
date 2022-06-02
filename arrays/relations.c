#include<stdio.h>
#include<conio.h>
 int main()
  {
  	int a[10],b[10],n,m,i,j;
  	printf("Enter Domain Elements \n");
  	for(i=0;i<10;i++)
  	{
  		scanf("%d",&a[i]);
	  }
	printf("Enter Codomain Elements \n");
    for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
		}	
	printf("which relation do you want to define on these two sets \n");
	printf("Press 1 for a/b \n Press 2 for a=b \n Press a=a^2 \n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			for(i=0;i<10;i++)
			{
				for(j=0;j<10;j++)
				{
					if(a[i]%b[j]==0)
					{
						printf("(%d,%d),",a[i],b[j]);
					}
				}
			}
		case 2:
			for(i=0;i<10;i++)
			{
				for(j=0;j<=10;j++)
				{
					if(a[i]==b[j])
					{
						printf("(%d,%d)",a[i],b[j]);
					}
				}
			}
		case 3:
				for(i=0;i<10;i++)
			{
				for(j=0;j<10;j++)
				{
					if(b[j]==a[i]*a[i])
					{
						printf("(%d,%d)",a[i],b[j]);
					}
				}
			}			
	}
	getch();
	return(0);
  }
