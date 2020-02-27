#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int num;
	printf("\n How many words do you want to enter?");
	scanf("%d",&num);

	char **arr=(char**)malloc(sizeof (char*)*num);
	char buffer[1024];

	int i=0;
	for(i=0;i<num;i++)
	{
		printf("\nEnter %dth word :",i);
		scanf("%s",buffer);
		arr[i]=(char*)malloc(strlen(buffer)+1);
		strcpy(arr[i],buffer);


	}

	printf("\nDone..Enterd values are");

	for(i=0;i<num;i++)
	{

		size_t len = strlen(arr[i]);
		int mid = len/2;
		printf("\nlen of %s is %u and mid is %c \n",arr[i],len,*(arr[i]+mid));


//		printf("\n%s",arr[i]);
	}
	


	for(i=0;i<num;i++)
	{
		free(arr[i]);
	}

	free(arr);

	return 0;
}
