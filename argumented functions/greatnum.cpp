#include<iostream>
using namespace std;

void max_num(int ,int);

int main()
{
	cout<<"Enter two numbers:"<<endl;
	int a,b;
	cin>>a>>b;
	max_num(a ,b );
	return 0;
	
}

void max_num(int a,int b)
{
	
	if (a > b)
		cout<<a<<" is larger number";
	else if(b > a)
		cout<<b<<" is larger number";
	else 
		cout<<a<<"and"<<b<<"both numbers are equal numbers";
}