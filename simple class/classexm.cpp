#include<iostream>
#include<string.h>
using namespace std;
class student
{
	int id ;
	string name;

public:
	void insert(int i ,string n)
	{
		id=i;
		name=n;

	}
	void display()
	{
		cout<<id<<" "<<name<<endl;
	}
};
int main(void)
{
	student s1;
	student s2;
	s1.insert(101, "Komal");
	s2.insert(102, " Swamini");
	
	s1.display();
	s2.display();
	
	
	return 0;
}
