#include <stdio.h>

int main()
{
	int n,i,j;
	printf("enter the number:");
	scanf("%d",&n);
	for (i=0;i<=n;i++){
		for(j=0;j<i;j++){
			printf(" * ");
		}
		printf("\n");
	}
	for (i=n;i>=0;--i){
		for(j=i;j>=0;--j){
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
