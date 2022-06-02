#include <stdio.h>
#include <conio.h>
int main()
  {
  	int n,lt,i,m;
   	printf("Enter First and last Number");
  	scanf("%d%d",&n,&lt);
  	for(i=1 ;i<=lt;i++)
  	  {
  	  	m=n*i;
  	  	printf("%d \n",m);
		}
    getch();
    return(0);
  }