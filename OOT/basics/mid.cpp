#include<iostream>
using namespace std;
int main()
{
	int a,r,s,m;
	cout<<"Enter the no:";
	cin>>a;
	for(int i=0;i<3;i++)
	{
		r=a%10;
		if(i%2==0)
			s+=r;
		else
			m=r;
		a=a/10;
	}
	if(s==m)
		cout<<"Both are equal";
	return 0;
}
