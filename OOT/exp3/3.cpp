/*3. Construct a class “Figure” for storage of dimensions of circles, triangle and rectangle and calculate their area using constructor overloading.*/
#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
class figure
{
	int s,s1;
	public:
	      figure(int a,int b,int c)
		{
			s=(a+b+c)/2;	
			s1=(s*(s-a)*(s-b)*(s-b));
			cout<<"Area="<<pow(s1,0.5);
		}
		figure(int r)
		{
			cout<<"Area="<<2*3.14*r;
		}
		figure(int l,int b)
		{
			cout<<"Area="<<l*b;
		}
		
};
int main()
{
	int ch;
	int a,b,c;
	
	while(1)
	{
		cout<<"\n1.Area of triangle.\n2.Area of circle.\n3.Area of rectangle.\n4.Exit\nEnter the choice:";
		cin>>ch;
		if(ch==1)
		{	
			cout<<"Enter length of 3 sides:";
				cin>>a>>b>>c;
				figure c1(a,b,c);
		}
				
		else if(ch==2)
		{
		
			cout<<"Enter the radius:";
				cin>>a;
				figure c2(a);
		}
		else if(ch==3)	
		{			cout<<"Enter the length and breadth:";
			cin>>a>>b;
				figure c3(a,b);
			}
		else	return 0;
	
	}
}
