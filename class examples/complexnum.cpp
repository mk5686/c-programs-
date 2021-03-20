/*Program to calculate the additon or Subtraction of complex number */
#include <iostream>
using namespace std;

class complexNum
	{
	    int real,img ,sum ;
	    public:
	        void getData();
	        void putData();
	        void addition(complexNum,complexNum);    //Object as function argument
	        void subtraction(complexNum, complexNum);

	};
	       
	void complexNum :: getData()
	{
	    cout<<"\n Enter real and imaginary part of num \n in the form of n real + imaginary(i)\n";
	    
	    cin>>real>>img;
	}
	void complexNum :: putData()
	{
	    cout<<"\n "<<real<<"+"<<img<<"i"<<endl;
	   
	}
	void complexNum :: addition (complexNum num1,complexNum num2)
	{
	            
	    real = num1.real + num2.real ;
	    img = num1.img + num2.img;
	            
	}
	void complexNum :: subtraction (complexNum num1,complexNum num2)
	{
	            
	    real = num1.real - num2.real ;
	    img = num1.img - num2.img;
	            
	}
	
	

int main() {
	
	complexNum ob1,ob2,s,a;
	ob1.getData();
	ob2.getData();
	cout << "\nYou enterd numbers are :";
	ob1.putData();
	ob2.putData();

	cout <<"\n Enter the choice:";
	cout<<"\n 1.Addition ";
	cout<<"\n 2.subtraction ";
	int ch;
	cin>>ch;

	switch(ch)
	{
		case 1:a.addition(ob1,ob2);
				cout << "\naddition is :";
				a.putData();
			break;
		case 2:s.subtraction(ob1,ob2);
				cout <<"\nsubtraction is :";
				s.putData();
			break;
		default:cout<<"\n Invalid Input:";
	}
	
	return 0;
}
