#include<iostream>
using namespace std;
void sort(int a[][100],int n=3)
{
	int temp,i;
	for(int k=0;k<n;k++)
	{
		for( i=0;i<n;i++)
		{
			for(int j=0;j<n-j-1;j++)
			{
				if(a[k][j]>a[k][j+1])
				{
					temp=a[k][j];
					a[k][j]=a[k][j+1];
					a[k][j+1]=temp;
				}
			}
		}
	}		
}	
int main()
{
	int a[100][100],n=3;
	char c;
	cout<<"Do you want to enter the size(y/n):";
	cin>>c;
	cout<<"Enter the elements of the array:\n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	switch(c)
	{
		case 'y':	cout<<"Enter the size:";
				cin>>n;
				sort(a,n);
				break;
		default	:	sort(a,n);			
	}
	cout<<"After sorting.\n";
	for(int i=0;i<n;i++)
	{
		cout<<"\n";
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	}
	return 0;
}
