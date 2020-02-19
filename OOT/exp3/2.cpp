/*Program to define an overloaded function to perform different types of sum such as  (a) sum of two numbers (b) sum of the digits of a number. (c) Sum of two string (joining).*/
#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
class check
{
	int s,r;
	public:
		check()
		{
			s=0;
		}
		void sum(int a,int b)
		{
			cout<<"\nsum="<<a+b;
		}
		void sum(int a)
		{
			while(a>0)
			{
				r=a%10;
				s=s*10+r;
				a/=10;
			}
			cout<<"\nSum="<<s;
		}
		void sum(char s1[],char s2[])
		{
			strcat(s1,s2);
			cout<<"Combined string="<<s1;
		}
}c;
main()
{
	int ch,a,b;
	char s1[100],s2[100];
	while(1)
	{
		cout<<"\n1.Sum of nos.\n2.Sum of digits.\n3.Sum of strings.\n4.Exit\nEnter the choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:	cout<<"Enter both the nos:";
				cin>>a>>b;
				c.sum(a,b);
				break;
			case 2:	cout<<"Enter the no:";
				cin>>a;
				c.sum(a);
				break;
			case 3:	cout<<"Enter the stings:";
				cin>>s1>>s2;
				c.sum(s1,s2);
				break;
			case 4:	exit(0);
		}
	}
}
