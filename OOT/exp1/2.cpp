#include<iostream>
#include<math.h>
using namespace std;
float calc(float p,float r,float n,float t)
{
	return (p*pow((1+(r/n)),(n*t)));
}
main()
{
	float I,p,r,n,t;
	cout<<"Enter the principle amount:";
	cin>>p;
	cout<<"Enter the rate of interset:";
	cin>>r;
	cout<<"Enter the n:";
	cin>>n;
	cout<<"Enter the time period:";
	cin>>t;
	cout<<"The intreset rate is "<<calc(p,r,n,t);
}
