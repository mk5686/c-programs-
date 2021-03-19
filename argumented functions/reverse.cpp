#include<iostream>
using namespace std;

void reverse(int);

int main()
{
	
	cout<<"Enter the number:";
	int rnum;
	cin>>rnum;
	reverse(rnum);
	return 0;
}

void reverse(int rnum)
{
	
	int temp,rev=0;
	while(rnum!=0)
	{
		temp=rnum%10;
		rev=rev*10+temp;
		rnum=rnum/10;
	}
	cout<<"Reversed number is :"<<rev;

} 