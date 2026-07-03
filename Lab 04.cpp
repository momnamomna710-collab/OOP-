#include <iostream>
using namespace std;

/*class Employee
{
	private:
		int id;
		string name;
		float salary;
	public:
		Employee()
		{
			id = 101;
			name = "ali";
			salary = 25000; 
		}
		
		void displayDetails()
		{
			cout<<"___Employee Details___"<<endl;
			cout<<"ID : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Salary : "<<salary<<endl;
			cout<<endl;			
		}
};

int main()
{
	Employee e1;
	e1.displayDetails();
	return 0;
}
*/


//____________________TASK#02_________________.


/*class BankAccount
{
	private:
		string accountNumber;
		string accountHolder;
		double balance;
	public:
		BankAccount(string accountNumber,string accountHolder,double balance)
		{
			this->accountNumber = accountNumber;
			this->accountHolder = accountHolder;
			this->balance = balance;
		}
	void showAccountDetails()
	{
	
		cout<<"____Account Details____"<<endl;
		cout<<"Account Number  : "<<this->accountNumber<<endl;
		cout<<"Account Holder  : "<<this->accountHolder<<endl;
		cout<<"Account Balance : "<<this->balance<<endl;
	}
};

int main()
{
	BankAccount b1("PK03050080100","Momina imran",20000);
	b1.showAccountDetails();
	return 0;
}
*/


//__________________TASK#03_______________.


/*class Rectangle
{
	private:
		float length;
		float width;
	public:
		Rectangle()
		{
			length = 1.0;
			width = 1.0;
		}
		
		Rectangle(float l,float w)
		{
			length = l;
			width = w;
		}
		
		Rectangle(float lw)
		{
			length = lw;
			width = lw;
		}
		
		float Area()
		{
			return length*width;
		}
		
		void displayArea()
		{	
			cout<<"Length : "<<length<<endl;
			cout<<"Width  : "<<width<<endl;
			cout<<"Area   : "<<Area()<<endl;
		}
};

int main()
{

	cout<<"Dimensions and Areas of  Rectangles"<<endl;


	cout<<"---Rectangle 1---"<<endl;
	Rectangle r1;
	r1.Area();
	r1.displayArea();
	cout<<endl;
	
	cout<<"---Rectangle 2---"<<endl;
	Rectangle r2(2.5,3.6);
	r2.Area();
	r2.displayArea();
	cout<<endl;
	
	cout<<"----Rectangle 3----"<<endl;
	Rectangle r3(5.5);
	r3.Area();
	r3.displayArea();
	cout<<endl;
	
	return 0;
}
*/

//_________________TASK04______________.

class Locker
{
	public:
		Locker()
		{
			cout<<"Locker allocated to customer.(Constructor Called)"<<endl;
		}
		~Locker()
		{
			cout<<"Locker returned by customer.(Destructor Called)"<<endl;
		}
};

int main()
{
	
	cout<<"First Object (Without using the pointer)"<<endl;
	cout<<"Starting..."<<endl;
	{
		Locker lock1;
	}
	cout<<"Ending..."<<endl;
	
	cout<<endl;
	
	cout<<"Second Object (Using the pointer)"<<endl;
	cout<<"Starting..."<<endl;
	Locker *lock2 = new Locker();
	delete lock2;
	cout<<"Ending..."<<endl;
	
	return 0;
}
