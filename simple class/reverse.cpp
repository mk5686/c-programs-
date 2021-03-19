#include<iostream>
using namespace std;

class rev
{
private:
	int num;
	int rev;
	int temp;
public:
	void get_data()
	{
		cout<<"Enter the number:";
		cin>>num;
	}
	void processing()
	{
		int rem;
		temp=num;
		rev=0;
		while (num!=0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;

		}

	}
	void result()
	{
		cout<<"\n Reversr of "<<temp<<" is "<<rev<<endl;
	}
}ob;
int main()
{
	ob.get_data();
	ob.processing();
	ob.result();

	return 0;
}