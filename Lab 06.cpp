
#include <iostream>
using namespace std;
/*class Product
{
	private:
		string name;
		float price;
	public:
		Product(string n, float p)
		{
			name = n;
			price = p;
		}
		
		void display_product()
		{
			cout<<"Product Name : "<<name<<endl;
			cout<<"Price        : $"<<price<<endl;
		}
		
		string getname()
		{
		return name;
		}
		float getprice()
		{
		return price;
		}
		
};
class Electronics : public Product
{
	private:
		int warrantyYears;
	public:
		Electronics(string n, float p, int years) : Product(n,p)
		{
			warrantyYears = years;
		}
		
		void display_electronics()
		{
			display_product();
			cout<<"Warranty Years : "<<warrantyYears<<endl;
		}
		
		int getyears()
		{
		return warrantyYears;
		}
		
};
int main()
{
	Electronics cable("dryer", 10000, 10);
	cable.display_electronics();
	return 0;
}
*/



//___________________Task02______________.


/*class Vehicle
{
	private:
		string brand;
	public:
		Vehicle(string b)
		{
			brand = b;
			cout<<"Constructor of Vehicle Class is Calling.."<<endl;
		}
		
		void display_Vehicle()
		{
			cout<<"Brand : "<<brand<<endl;
		}
				
};

class Car : public Vehicle
{
	private:
		int lights;
	public:
		Car(string b, int l) : Vehicle(b)
		{
			lights = l;
			cout<<"Constuctor of Car Class is Calling.."<<endl;
		}
		
		void display_Car()
		{
			display_Vehicle();
			cout<<"No. of Lights : "<<lights<<endl;
		}
		
};

class ElectricCar : public Car
{
	private:
		int battery;
	public:
		ElectricCar(string b, int l, int batt) : Car(b,l)
		{
			battery = batt;
			cout<<"Constructor of ElectricCar Class is Calling.."<<endl;
		}
		
		void display_ElectricCar()
		{
			display_Car();
			cout<<"Battery Power : "<<battery<<" KWH"<<endl;
		}
		
};

int main()
{
	ElectricCar ec1("civic", 8 , 1000);
	
	cout<<endl;
	
	cout<<"Vehicle Details"<<endl;

	ec1.display_ElectricCar();
	
	return 0;
}
*/

//___________TASK03___________.


/*#include <string>
class Document {
protected:
    string fileName;

public:
    Document(string name) {
        fileName = name;
        cout << "[System] Initializing Document: " << fileName << " (Parent Constructor)" << endl;
    }

    ~Document() {
        cout << "[System] Releasing Document Resources: " << fileName << " (Parent Destructor)" << endl;
    }
};


class PDFDocument : public Document {
private:
    string content;

public:
    PDFDocument(string name, string text) : Document(name) {
        content = text;
        cout << "[PDF] Formatting Content... (Child Constructor)" << endl;
    }

    ~PDFDocument() {
        cout << "[PDF] Clearing Buffer... (Child Destructor)" << endl;
    }

    void showData() {
        cout << "--- PDF Display ---" << endl;
        cout << "File Name: " << fileName << endl;
        cout << "Body Text: " << content << endl;
        cout << "-------------------" << endl;
    }
};

int main() {
    {
        PDFDocument myFile("Lab_Report.pdf", "Analysis complete.");
        myFile.showData();
        
        cout << "\n>> Object is about to leave scope..." << endl;
    } 

    cout << ">> Object has been destroyed.\n" << endl;

    return 0;
}
*/

//______________TASK04_______________.

class Device
{
	private:
		string *device_name;
		string *device_id;
	public:
		Device(string name, string id)
		{
			device_name = new string(name);
			device_id = new string(id);
			cout<<"Parent Class Constructor, Memory Allocated On Heap..."<<endl;
		}
		
		virtual ~Device()
		{
			delete device_name;
			delete device_id;
			cout<<"Parent Class Ka Destructor Call Hogya Ha..."<<endl;
		}
		
		string getname()
		{ 
		return *device_name; 
		}
		string getid()
		{ 
		return *device_id; 
		}
		
};

class Sensor : public Device
{
	private:
		string *sensor_type;
		float *sensor_value;
	public:
		Sensor(string name, string id, string type, float value):Device(name, id)
		{
			sensor_type = new string(type);
			sensor_value = new float(value);
			cout<<"Child Class Constructor, Memory Allocated On Heap..."<<endl;
		}
		
		~Sensor()
		{
			delete sensor_type;
			delete sensor_value;
			cout<<"Child Class Ka Destructor Call Hogya Ha..."<<endl;
		}
		
		void show_data()
		{
			cout<<"~~~DEVICE DETAILS~~~"<<endl;
			cout<<"Device Name : "<<getname()<<endl;
			cout<<"Device ID   : "<<getid()<<endl;
			cout<<"Sensor Type : "<<*sensor_type<<endl;
			cout<<"Sensor Value: "<<*sensor_value<<endl;
			cout<<"~~~~~~~~~~~~~~~~~~~~"<<endl;
		}
};

int main()
{
	Sensor *s1 = new Sensor("Thermometer", "TH-101", "Temperature(Celcius)", 36.9);
	s1->show_data();
	
	delete s1;
	return 0;
}
