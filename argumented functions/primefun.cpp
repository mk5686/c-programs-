#include<iostream>
using namespace std;

void prime(int num)
{
	int count;
	
	if(num==1)
		cout<<"You entered 1 which is nither prime or not \n ";
	else if(num==2)
	{
		cout<<"Number is not prime \n :";
		
	}
	else
	{
		for ( int i=2;i<num/2;i++)
		{	count=0;
			if(num%i==0)
				{
					count=1;
					break;
				}
		}
		if(count!=0)
			cout<<"num is not prime :\n ";
		
		else
			cout<<"num is prime\n ";
	}
}
int main()
{
	int num;
	cout<<"\n prime";
	cout<<"\n Input num:";
	cin>>num;
	prime(num);
	return 0;
}
