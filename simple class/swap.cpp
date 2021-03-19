#include<iostream>
using namespace std;
class swap
{
private:
	int a;
	int b;
public:
	void get_data()
	{
		cout<<"Enter the values of a and b";
		cin>>a>>b;
	}
	void process()
	{
		int temp;
		cout<<"\n values before swapping a= "<<a<<" and b= "<<b;
		temp=a;
		a=b;
		b=temp;
		cout<<"\n values after swapping a= "<<a<<" and b= "<<b<<endl;
	}
}ob;
int main()
{
	ob.get_data();
	ob.process();

	return 0;
}