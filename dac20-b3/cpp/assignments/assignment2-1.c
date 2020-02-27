// fuction pointer array 
// with array as argument

#include<stdio.h>
#include<stdlib.h>
#define SIZE 3

void menu()
{
	printf("\n1.Addition");
	printf("\n2.Multiplication");
	printf("\n3.Minimum number");
	printf("\n4.Maximum number");
	printf("\n5.Exit");
}

int add(int* arr)
{
	int a,b;
	a=arr[0];
	b=arr[1];
	printf("\nAddition is=%d",a+b);
	return 0;
}

int mul(int* arr)
{

	int a,b;
	a=arr[0];
	b=arr[1];
	printf("\nMultiplication is=%d",a*b);

	return 0;
}

int max(int* arr)
{
	int a,b,c;
	a=arr[0];
	b=arr[1];
	c=arr[2];
	(a<b)?(b<c)?printf("Maximum no. is %d",c):printf("Maximum no. is %d",b):(a<c)?printf("Maximum no. is %d",c):printf("Maximum no. is %d",a);

	return 0;

}



int min(int* arr)
{

	int a,b,c;
	a=arr[0];
	b=arr[1];
	c=arr[2];
	(a>b)?(b>c)?printf("Minimum no. is %d",c):printf("Minimum no. is %d",b):(a>c)?printf("Minimum no. is %d",c):printf("Minimum no. is %d",a);

	return 0;
}
int ext(int* arr)
{
	exit(0);
}

int main()
{
	int (*pfn[5])(int*) ={add,mul,min,max,ext};
	menu();
	int choice =0;
	printf("\n enter choice from the above ");
	scanf("%d",&choice);

	int a[SIZE];
	int i;
	printf("enter numbers : ");

	if(choice==1 || choice==2)
	{
		for (i=0;i<SIZE-1;i++)
		{
			scanf("%d",&a[i]);
		}
	}
	else
	{
		
		for (i=0;i<SIZE;i++)
		{
			scanf("%d",&a[i]);
		}
	}
	

	(*pfn[choice-1])(a);


	return 0;
}
