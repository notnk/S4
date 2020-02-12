/*2. Write an object oriented program to accept and count of votes of valid candidates. Also print the discarded votes if the candidate ID is invalid. Use constructor to initialize the candidate_votes as 0 and declare total_votes as static data member. Assume valid candidate ID is from 1-5 and use array of objects to keep the count of votes of valid candidates.*/
#include<iostream>
using namespace std;\
int i=0;
class vote
{
	int c_votes,c_id,s1,s2;
	static int t_votes,d_votes;
	public:
	vote()
	{
		s1=0;
		s2=0;
		c_votes=0;
		//d_votes=0;
		//t_votes=0;
	}
	static void count()
	{
		t_votes++;
	}
	void get();//to get the id and check
	void disp();
}c[100];
int vote::t_votes=0;
int vote::d_votes=0;
void vote::disp()
{
	//cout<<"Candidate votes:"<<s1;
	cout<<"\nDiscarded votes:"<<d_votes;
	cout<<"\nTotal votes="<<t_votes;
}
void vote::get()
{
	cin>>c_id;
	if(c_id<6 && c_id>0)
	{
		count();
		cout<<"Successfully voted!";
		c_votes=c_votes+1;
		//cout<<c[i].c_votes;
	}
	else
	{
		cout<<"Voting unsucessfull!";
		d_votes=d_votes+1;
		//cout<<c[i].d_votes++;
	}	
}
main()
{	int ch;
	do
	{
		i++;
		cout<<"\nEnter the candidate id:";
		c[i].get();
		c[i].disp();
		cout<<"\nMore users(1):";
		cin>>ch;
	}while(ch==1);
}
