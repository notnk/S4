#include<iostream>
using namespace std;
int main()
{
	int a,r,s,n=0;
	cout<<"Enter the no:";
	cin>>a;
	s=a;
	while(a!=0)
	{
		r=a%10;
		n=n*10+r;
		a/=10;
	}
	cout<<n<<"\n";
	if(n==s)
		cout<<"its paladrome";
	return 0;
}
