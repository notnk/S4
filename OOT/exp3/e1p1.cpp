/*Write a program to count the number of persons inside a bank, by increasing count whenever a person enters a bank, using an increment (++) operator overloading function, and decrease the count whenever a person leaves the bank using a decrement (--) operator overloading function inside a class.*/
#include<iostream>
using namespace std;
class bank
{
	int count;
	public:
	bank()
	{
		count=0;
	}
	void operator++()
	{
		++count;
	}
	void operator--()
	{
		--count;
	}
	void display()
	{
		cout<<"\ninside:"<<count;
	}
};
int main()
{
	bank b;
	int n;
	while(1)
	{
		cout<<"1.Enter\n2.Exit\n3.Exit program\nOption:";
		cin>>n;
		if(n==1)
			++b;
		else if(n==2)
			--b;
		else 
			break;
	}
	b.display();
	return 0;
}
