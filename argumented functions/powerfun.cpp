#include<iostream>
using namespace std;
void power(int,int);
int main()
{
	int base,index;
	cout<<"\n Input base and index:";
	cin>>base>>index;
	power(base ,index);
	return 0;
}

void power(int base ,int index)
{
	int r=1;
	for ( int i = 0; i < index; i++)
	{
		r=r*base;
	}
	
	cout<<base<<" raise to "<<index<<" is "<<r<<"\n\n";
}