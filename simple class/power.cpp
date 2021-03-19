#include<iostream>
using namespace std;
class power
{
private:
	int base;
	int index;
	int res;
public:
	void gets()
	{
		cout<<"\n Enter the base and index:";
		cin>>base>>index;
	}
	void processing()
	{
		res=1;
		
		for(int i = 0; i < index; i++)
		{
			res=res*base;
		}
	}
	void puts()
	{
		cout<<base<<" raise to "<<index<< " is "<<res<<endl;
	}
};
int main()
{
	power ob;
	ob.gets();
	ob.processing();
	ob.puts();

	return 0;
}