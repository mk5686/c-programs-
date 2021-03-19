
#include<iostream>
using namespace std;

void fact(int no)
{
	int fact=1;
	
	for ( int i=1;i<=no;i++)
	{
		fact=fact*i;
	}
	cout<<"\n Factorial of"<<no<<" is "<<fact<<"\n\n" ;
	
}
int main()
{
	int no;
	cout<<"\n Factorial";
	cout<<"\n Enter the number :";
	cin>>no;
	fact(no);
	return 0;
}