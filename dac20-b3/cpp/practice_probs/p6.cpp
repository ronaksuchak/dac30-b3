//linear search

#include <iostream>
using namespace std;

int *createDynamicArray(int *limit)
{
	int *a;
	int n;
	cout << "Enter number of element: ";
	cin >> n;
	*limit = n;

	a = (int *)malloc(sizeof(int) * n);
	return a;
}
void getUservalues(int *a, int limit)
{
	cout << "\n Enter Numbers";
	for (int i = 0; i < limit; i++)
	{
		cin >> a[i];
	}
}
void search(int *a, int limit)
{
	int key;
	cout << "Enter Value to search : " << endl;
	cin >> key;
	for (int i = 0; i < limit; i++)
	{
		if (a[i] == key)
		{
			cout << "Entered element found at " << i + 1 << endl;
		}else{
			cout<<"NotFound!!"<<endl;
		}
	}
}
void printArray(int *a, int limit)
{
	for (int i = 0; i < limit; i++)
	{
		cout << a[i] << endl;
	}
}
void menu()
{
	cout << "Enter Choice"<<endl;
	cout << "1. search " << endl;
	cout << "2. Exit" << endl;
}
int main()
{
	int choice, limit;
	int *a;
	do
	{
		menu();
		cin >> choice;
		if (choice == 1)
		{
			a = createDynamicArray(&limit);
			getUservalues(a, limit);
			search(a, limit);
		}else if (choice == 2)
		{
			free(a);
			exit(0);
		}
		else
		{
			free(a);
			exit(0);
		}

	} while (1);

	return 0;
}