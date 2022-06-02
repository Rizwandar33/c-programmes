#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void display(int []);
void sum(int []);
void linearsearch(int []);
void reverse(int []);
void frequency(int []);
void allfreq(int []);
void bubble(int []);
int main()
{
	int arr[10],i,n,y;
	printf("Enter Array elements less than 10 \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	do
	{
		printf ("Enter 1 for display Array Elements \n Enter 2 for sum of array Elements \n Enter 3 for Search an Element in an array \n Enter 4 for Reserve of  an Array \n Enter 5 for frequency of an array \n Enter 6 to check frequency of every element in an array \n Enter 7 for Search of an Element using  binary sort \n Enter 8 for Search of an Element using bubble sort \n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			display(arr);
			break;
		case 2:
		     sum(arr);
			 break;
		case 3:
		    linearsearch(arr);
			break;
		case 4:
		   	reverse(arr);
		   	break;
		case 5:
			frequency(arr);
			break;
		case 6:
			allfreq(arr);
			break;
//		case 7:
//			binary(arr);
//			break;
		case 8:
			bubble(arr);
			break;
		default:
			printf("invalid selection \n");
		}
		printf("If you want to continue press 1 \n ");
		scanf("%d",&y);
		
	}
	while(y==1);
	getch();
	return(0);
	}
	void display( int arr[])
	{
		int i;
	 for(i=0;i<10;i++)
	   {
	   	printf("%d \t",arr[i]);
	   }
	}
	void sum(int arr [])
	{
		int s=0,i;
		 for(i=0;i<10;i++)
      {
      	s=s+arr[i];
	  }
	  printf("The sum of an array is %d \n",s);
	}
	void linearsearch(int arr [])
	{
		int num,flag=0,i;
		printf("Enter the Number to Search\n");
		scanf("%d",&num);
		for(i=0;i<10;i++)
		{
			if(arr[i==num]);
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
		{
			printf("number found");
		}
		else
		{
			printf("number not found");
		}

	}
    void reverse(int arr [])
    {
    	int i,j,temp=0,n=10;
    	 printf("Array before swapping \n");
	 for(i=0;i<10;i++)
	 {
	 	printf("%d \t",arr[i]);
	 }
	 for(i=0,j=n-1;i<=n/2;i++,j--)
	 {
	 	temp=arr[i];
	 	arr[i]=arr[j];
	 	arr[j]=temp;
	 }
	 printf("\n Array after swapping \n");
	 for(i=0;i<10;i++)
	 {
	 	printf("%d \t",arr[i]);
	 }
	}
	void frequency(int arr [])
	{
		int num,count=0,i;
		printf("Enter the array element to check frequeny \n ");
		scanf("%d",&num);
		for(i=0;i<10;i++)
		{
			if(num==arr[i])
			{
				count=count++;
				break;
			}
		}
		printf("%d is present %d times in an array",num,count);
	}
	void allfreq(int arr [])
	{
		int i,j,k,count=0,n,flag=0;
		for(i=0;i<10;i++)
		{
			for(k=0;k<i;k++)
			{
				if(arr[i]==arr[k])
				{
					flag=1;
					break;
				}
			}
			if(flag!=1)
			{
				for(j=i;j<n;j++)
				{
					if(arr[i]=arr[j])
					{
						count=count++;
					}
				}
				printf("%d is present %d times in the array ",arr[i],count);
			}
		}
	}
	 void bubble(arr [])
	 {
	 		int i,j,temp=0,n=10;
  	printf("Enter Array Elements Upto 10 \n");
   	for(i=0;i<10;i++)
   	{
   		scanf("%d",&arr[i]);
	   }
	   for(i=0;i<n-1;i++)
	   {
  	for(j=0;j<n-i-1;j++)   

    {    
            if(arr[j] > arr[j + 1])
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	   	 printf("Array Elements After sorting");
	   for(i=0;i<10;i++)
	   {
	   	printf("%d \t",arr[i]);
	   }
	  } 