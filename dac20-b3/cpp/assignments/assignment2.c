// fuction pointer array 


#include<stdio.h>
#include<stdlib.h>

void menu()
{
	printf("\n1.Addition");
	printf("\n2.Multiplication");
	printf("\n3.Minimum number");
	printf("\n4.Maximum number");
	printf("\n5.Exit");
}

int add()
{
	int a,b,add;
	printf("\nEnter 2 numbers ");
	scanf("%d%d",&a,&b);
	printf("\nAddition is=%d",a+b);
	return 0;
}

int mul()
{

	int a,b,multi;
	printf("\nEnter 2 numbers ");
	scanf("%d%d",&a,&b);
	printf("\nMultiplication is=%d",a*b);

	return 0;
}

int max()
{
	int a,b,c;
	printf("\nEnter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	(a<b)?(b<c)?printf("%d",c):printf("%d",b):(a<c)?printf("%d",c):printf("%d",a);

	return 0;

}



int min()
{

	int a,b,c;
	printf("\nEnter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	(a>b)?(b>c)?printf("%d",c):printf("%d",b):(a>c)?printf("%d",c):printf("%d",a);

	return 0;
}
int ext()
{
	exit(0);
}

int main()
{
	int (*pfn[5])() ={add,mul,min,max,ext};
	menu();
	int choice =0;
	printf("\n enter choice from the above ");
	scanf("%d",&choice);

	(*pfn[choice-1])();


	return 0;
}
