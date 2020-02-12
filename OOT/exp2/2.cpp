/*2. Write an object oriented program to accept and count of votes of valid candidates. Also print the discarded votes if the candidate ID is invalid. Use constructor to initialize the candidate_votes as 0 and declare total_votes as static data member. Assume valid candidate ID is from 1-5 and use array of objects to keep the count of votes of valid candidates.*/
#include<iostream>
using namespace std;
int i=0;
class vote
{
	int c_votes,d_votes,c_id;
	static int t_votes;
	public:
	vote()
	{
		c_votes=0;
		d_votes=0;
		//t_votes=0;
	}
	static void count()
	{
		t_votes++;
		cout<<"Total votes="<<t_votes<<"\n";
	}
	void get();//to get the id and check
}c[100];
int vote::t_votes=0;
void vote::get()
{
	cin>>c[i].c_id;
	if(c[i].c_id<6 && c[i].c_id>0)
	{
		count();
		cout<<"Successfully voted!\n";
		c[i].c_votes++;
	}
	else
	{
		cout<<"Voting unsucessfull!\n";
		c[i].d_votes++;
	}	
}
main()
{	int ch;
	do
	{
		i++;
		cout<<"Enter the candidate id:";
		c[i].get();
		cout<<"More users?(1):";
		cin>>ch;
	}while(ch==1);
}
