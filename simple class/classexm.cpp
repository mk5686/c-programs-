#include<iostream>

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
	student s3;
	s1.insert(101, "Komal");
	s2.insert(102, " Swamini");
	s3.insert(103, "Pratiksha");
	
	s1.display();
	s2.display();
	s3.display();
	

	
	return 0;
}
