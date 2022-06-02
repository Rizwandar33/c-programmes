#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
 	char str[20],str2[20];
 	int i,count=0;
 	printf("Enter a first string");
 	gets(str);
 	printf("Enter a Secound");
 	gets(str2);
 	i=0;
 	while(str[i]!='\0')
 	{
 		count=count+1;
 		i++;
	 }
	 i=0;
	 while(str2[i]!='\0')
	 {
	 	str[count]=str2[i];
	 	count=count+1;
	 	i++;
	 }
	 printf("The Concatination of two arrays is \n ");
	 puts(str);
	 getch();	
 }