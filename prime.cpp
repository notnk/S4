#include<iostream>
using namespace std;
int main()
{	
	int a,flag;
	cout<<"Enter the no:";
	cin>>a;
	for(int i=2;i<a;i++)
	{
		flag=1;
		if(a%i==0)
		{
			cout<<i<<"Is a factor.\n";
			for(int j=2;j<i;j++)
			{
				if(i%j==0)
				{
					cout<<i<<" is Not prime\n";
					flag=0;
				}
			}
			if(flag==1)
				cout<<i<<"Is prime\n";
		}
	}
	return 0;
}
