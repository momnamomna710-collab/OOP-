#include <iostream>
using namespace std;

/*class Display
{
	private:
		double final_value;
	public:
		Display()
		{
			final_value = 0.0;
		}
		
		double show_result(double value)
		{
			final_value = value;
			cout<<"Result : "<<final_value<<endl;
		}
	
		double getfinal_value() const 
		{
		return final_value;
		}
	
	
};

class Calculator
{
	private:
		Display display;
	public:
		Calculator(){} //Constructor...
		
		void add(double a, double b)
		{
			double result = a + b;
			display.show_result(result);
		}
		
		void multiply(double a, double b)
		{
			double result = a * b;
			display.show_result(result);
		}
		
		void show_previous_result() const 
		{
			cout<<"Previous Result : "<<display.getfinal_value()<<endl;
		}
		
};

int main()
{
	Calculator c1;
	c1.add(6.4, 5.6);
	c1.multiply(1.5, 3.0);
	c1.show_previous_result();
	
	return 0;
}*/






//_____________________TASK#02_________________.


class Calculator
{
	public:
		double addition(double a, double b)
		{
			return a+b;
		}
		
		double multiplication(double a, double b)
		{
			return a*b;
		}
};

class Student
{
	private:
		Calculator *calc;
	public:
		Student(Calculator *c)
		{
			calc = c;
		}
		
		void addition_result(double a, double b)
		{
			if(calc)
			{
				cout<<"Result (Addition) : "<<calc->addition(a,b)<<endl;
			}
		}
		
		void multiplication_result(double a, double b)
		{
			if(calc)
			{
				cout<<"Result (Product) : "<<calc->multiplication(a,b)<<endl;
			}
		}
		
};

int main()
{
	
	Calculator c;
	
	Student s1(&c);
	Student s2(&c);
	
	cout<<"~~Student 01~~"<<endl;
	s1.addition_result(5.5,6.5);
	s1.multiplication_result(5.0,6.0);
	
	cout<<endl;
	
	cout<<"~~Student 02~~"<<endl;
	s2.addition_result(4.5,3.5);
	s2.multiplication_result(3.0,2.0);
	
	return 0;
}
