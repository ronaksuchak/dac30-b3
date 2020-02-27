#include<iostream>
using namespace std;

int main()
{
    int i,j,k,n;
	cout<<"\nenter no";
	cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=n;j>0;j--)
        {
            if(j<=i){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

