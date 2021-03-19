#include<iostream>
using namespace std;

class fact
{
private:
	int num;
	int fact;
public:
	void get_data()
	{
		cout<<"\n Enter the value";
		cin>>num;

	}
	void process()
	{
		int tamp;
		fact = 1;
		for(int i = 1; i <= num; i++)
		{
			fact = fact * i;


		}
	}
	void put_data()
	{
		cout<<"\n factorial of "<<num<<" is "<<fact<<endl;
	}
}ob;
int main()
{
	ob.get_data();
	ob.process();
	ob.put_data();

	return 0;
}
