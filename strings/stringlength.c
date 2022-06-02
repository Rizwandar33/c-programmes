#include<stdio.h>
#include<conio.h>
#include<string.h>
  void main()
  {
  	char str[20];
  	int i,count=0;
  	printf("Enter a string to find its length");
  	gets(str);
  	i=0;
  	while(str[i]!='\0')
  	{
  		count=count+1;
  		i++;
	  }
	  printf("The length of a string you have entered is : %d",count);
  }