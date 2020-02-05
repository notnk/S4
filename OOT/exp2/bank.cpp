/*class bank
members: name, acc no, type of acc, balance
func: to assign values, to deposit an amount, to withdrawn after checking the balance, 
to display name and balance*/
#include<iostream>
using namespace std;
int n,x,id;
class bank
{
	char name[50],type[10];
	int acc_no,bal;
	public:
	bank()
	{
		bal=500;
	}
	void getdata();
	void deposit();
	void withdraw();
	void display();
}b;
void bank::getdata()
{
	cout<<"Enter the name.\naccount no.\ntype of accouunt.\n";
	cin>>name>>acc_no>>type;
}
void bank::deposit()
{
	cout<<"Enter the amount to be deposited:";
	cin>>x;
	bal+=x;
}
void bank::withdraw()
{	
	cout<<"Enter the amount to be withdrawn:";
	cin>>x;
	if(x>bal)
		cout<<"No sufficent amount!";
	else
		bal-=x;
}
void bank::display()
{
	cout<<"Details\n";
	cout<<"Name:"<<name<<"\nAccount type:"<<type<<"\nAccount no:"<<acc_no<<"Account balance:"<<bal;
}
main()
{
	int ch;
	cout<<"Enter the details required.\n";
	b.getdata();
	while(1)
	{
		cout<<"1.deposit amount.\n2.Withdraw amount.\n3.Display the details.\nx.exit\nEnter the choice :";
		cin>>ch;
		switch(ch)
		{
			case 1:	b.deposit();
				break;
			case 2: b.display();
				b.withdraw();
				break;
			case 3:	b.display();
			default:exit(0);
		}	
	}
}
