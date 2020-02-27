#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct 
{

	int id;
	char* name;

}student;

int cmp(const void *a, const void *b){
	const student *p =(const student*) a;
	const student *q = (const student* )b;
	return (p->id - q->id);
}

int strSort(const void *a,const void *b)
{
	const student *p =(const student*) a;
	const student *q = (const student* )b;
	return (strcmp(p->name,q->name));

}


int main()
{
	student arr[] = {{3,"abc"},{2,"pqr"},{10,"xyz"}};
	int n= sizeof(arr)/sizeof(arr[0]);

	qsort(arr,n,sizeof(student),cmp);

	for (int i=0;i<n;i++){
		printf("%d, %s\n ",arr[i].id,arr[i].name);
	}

	qsort(arr,n,sizeof(student),strSort);

	for (int i=0;i<n;i++){
		printf("%d, %s\n ",arr[i].id,arr[i].name);
	}


	return 0;
}
