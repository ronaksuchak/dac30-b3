#include<stdio.h>
#include<stdlib.h>

int main()
{
	int no,a,b,c,result;
	printf("\nenter a number: ");
	scanf("\n%d",&no);
   
	a=no%10;
    printf("\n %d",a);
    no=no/10;
    b=no%10;
    printf("\n %d",b);
	no=no/10;
	c=no%10;
	printf("\n %d",c);
	result=a+b+c;
	printf("\nresult is %d\n",result);
	

}
