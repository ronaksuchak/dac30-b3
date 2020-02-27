#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int sortFn(const void *p1, const void *p2) 
{
	return strcmp(*(const char **) p1,*(const char **) p2);
}


int num;
int main()
{
//	int num;
	printf("\n How many words do you want to enter?");
	scanf("%d",&num);

	char **arr=(char**)malloc(sizeof (char*)*num);
	char buffer[1024];

	int i;
	for(i=0;i<num;i++)
	{
		printf("\nEnter %dth word :",i);
		scanf("%s",buffer);
		arr[i]=(char*)malloc(strlen(buffer)+1);
		strcpy(arr[i],buffer);
	}

	printf("\nDone..Enterd values are");


//before
	for(i=0;i<num;i++)
	{
		printf("%s\n",arr[i]);
	}
//sort

	qsort(arr,num,sizeof(char*),sortFn);

//after
	
	for(i=0;i<num;i++)
	{
		printf("\n%s",arr[i]);
	}
//free memory

	for(i=0;i<num;i++)
	{
		free(arr[i]);
	}

	free(arr);

	return 0;
}
