/*program for processing shooping list*/

#include<iostream>
using namespace std;

const int m = 50;  //provides value for array size

class ITEMS
{
private:
	int itemCode[m];
	float itemPrice[m];
	int count;
public:
	void CNT(void)
	{
		count=0;    //to initializes counter to 0
	}
	void getitem(void);
	void displaySum(void);
	void remove(void);
	void displayItems(void);
};

void ITEMS :: getitem(void)
{
	cout << "\n Enter item code :";
	cin >> itemCode[count];

	cout << "\n Enter item cost: ";
	cin >> itemPrice[count];
	count++;
}
void ITEMS :: displaySum(void)
{
	float sum = 0;
	for (int i = 0; i < count; i++)
	{
		sum=sum+itemPrice[i];
	}
	cout << "\n Total value: "<< sum << endl;
}
void ITEMS :: remove(void)
{
	int a;
	cout << "\n Enter the itam code: ";
	cin >> a;
	for(int i = 0; i < count ; i++)
		if(itemCode[i]==a)
			itemPrice[i] = 0;
}
void ITEMS :: displayItems()
{
	cout<<"\ncode price\n";
	for ( int i = 0; i < count; i++)
	{
		cout << "\n" << itemCode[i];
		cout << " " << itemPrice[i];
	}
	cout<<"\n";

}

int main()
{
	ITEMS order;
	order .CNT();
	int x;
	do 
	{												//do ...while loop
		
		cout <<"\n You can do the following :";
		cout <<"\n Enter the appropriate choice :";

		cout<<" \n1 : Add an Item: ";
		cout<<" \n2 : Display Total values:";
		cout<<" \n3 : Delete and item";
		cout<<" \n4 : Display aall iteams";
		cout<<" \n5 : Quite";

		cout<<"\n\n What is your choice: ";
		cin>>x;
		switch(x)
		{
			case 1:order.getitem();
				break;
			case 2:order.displaySum();
				break;
			case 3:order.remove();
				break;
			case 4:order.displayItems();
				break;
			case 5:break;
			default: cout<<" \n Error in input ";

		}
	}while (x!=5);

	return 0;
}
