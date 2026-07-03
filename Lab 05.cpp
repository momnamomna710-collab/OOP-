#include <iostream>
using namespace std;

/*class Person 
{
	private:
    	string name;
    	int age;
	public:
    	Person()
		{
    		name = "Unknown";
    		age = 0;
		}
		
    	void setPersonData(string n, int a) 
		{
        name = n;
        age = a;
    	}

	    string getName() 
		{ 
		return name; 
		}
	    int getAge() 
		{ 
		return age; 
		}

	    void display_person_info() 
		{
    	    cout << "~~~~~ Person's Information ~~~~~" << endl;
        	cout << "Name : " << name << endl;
        	cout << "Age  : " << age << endl;
        	cout << endl;
    	}
};

class Student : public Person 
{
	private:
    	string student_id;

	public:
		
		Student() : Person()
		{
			student_id = "Unknown";
		}
		
    	void setStudentData(string id) 
		{
        student_id = id;
    	}

    	void display_student_info() 
		{
        	cout << "~~~~~ Student's Information ~~~~~" << endl;
        	cout << "Name : " << getName() << endl;   
        	cout << "Age  : " << getAge() << endl;   
        	cout << "ID   : " << student_id << endl;
        	cout << endl;
    	}
};

int main() 
{
    string name, id;
    int age;

  
    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Age: ";
    cin >> age;

    cout << "Enter Student ID: ";
    cin >> id;


    Student s1;

  
    s1.setPersonData(name, age);
    s1.setStudentData(id);

   
    s1.display_person_info();
    s1.display_student_info();

    return 0;
}
*/

//_______________________TASK#02____________________.

/*class Person
{
	private:
		string name;
		int age;
	public:
		Person(string n, int a)
		{
			name = n;
			age = a;
		}
		
		void set_data(string n,int a)
		{
			name = n;
			age = a;
		}
		
		void display_person()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Age  : "<<age<<endl;
		}
		
		string getname()
		{
		return name;
		}
		int getage()
		{
		return age;
		}
};

class Employee : public Person
{
	private:
		string employee_id;
	public:
		Employee(string n,int a, string id) : Person(n,a)
		{
			employee_id = id;
		}
		
		void set_id(string id)
		{
			employee_id = id;
		}
		
		void display_employee()
		{
			display_person();
			cout<<"ID   : "<<employee_id<<endl;
		}
		
		string getemployee_id()
		{
		return employee_id;
		}
};

class Manager : public Employee
{
	private:
		string department;
	public:
		Manager(string n, int a, string id, string d) : Employee(n, a, id)
		{
			department = d;
		}
		
		void set_department(string d)
		{
			department = d;
		}
		
		void display_manager()
		{
			display_employee();
			cout<<"Department : "<<department<<endl;
		}
		
		string getdepartment()
		{
		return department;
		}
};

int main()
{
	string n;
	int a;
	string id;
	string d;
	
	cout<<"Enter Name : ";
	getline(cin,n);
	cout<<"Enter Age : ";
	cin>>a;
	cout<<"Enter ID : ";
	cin>>id;
	cin.ignore();
	cout<<"Enter Department : ";
	getline(cin,d);
	

	Manager m("john",13,"735395","Software Engineering"); 
	
	m.set_data(n,a);
	m.set_id(id);
	m.set_department(d);
	cout<<"---Person Information---"<<endl;
	m.display_person();
	cout<<"---Employee Information---"<<endl;
	m.display_employee();
	cout<<"---Manager Information---"<<endl;
	m.display_manager();
	
	return 0;
}
*/



//_________________TASK#03_________________.



/*#include <iomanip>
class Employee
{
	private:
		string name;
		double salary;
	public:
		Employee(string n, double s)
		{
			name = n;
			salary = s;
		}
		
		void display_employee()
		{
			cout<<"Name : "<<name<<endl;
			cout<<"Salary : $"<<fixed<<setprecision(0)<<salary<<endl;
		}
		
		string getname()
		{
		return name; 
		}
		double getsalary()
		{
		return salary; 
		}
};

class Developer : public Employee
{
	private :
		string programming_language;
	public:
		Developer(string n, double s, string pl) : Employee(n,s)
		{
			programming_language = pl;
		}
		
		void display_developer()
		{
			display_employee();
			cout<<"Programming Language : "<<programming_language<<endl;
		}
		
		string get_prolang()
		{
		return programming_language;
		}
};

class Designer : public Employee
{
	private:
		string design_tool;
	public:
		Designer(string n, double s, string dt) : Employee(n,s)
		{
			design_tool = dt;
		}
		
		void display_designer()
		{
			display_employee();
			cout<<"Design Tool : "<<design_tool<<endl;
		}
		
		string get_designtool()
		{
		return design_tool;
		}
};

int main()
{
	Developer d("Jojo", 300000,"python");
	cout<<"___Developer's Information___"<<endl;
	d.display_developer();
	
	Designer des("John", 450000, "canva");
	cout<<"____Designer's Information____"<<endl;
	des.display_designer();
	
	return 0;
}
*/


//_________________Task#04_______________.


#include <string>

using namespace std;


class AudioPlayer {
public:
    void start_audio() {
        cout << "Outputting Audio Signal..." << endl;
    }
};


class VoiceRecorder {
public:
    void capture_voice() {
        cout << "Capturing Voice Input..." << endl;
    }
};

class SmartCommunicator : public AudioPlayer, public VoiceRecorder {
public:
    void execute_voice_note() {
        cout << "--- Processing Voice Note ---" << endl;
        capture_voice(); 
        start_audio();   
    }
};

int main() {
    SmartCommunicator device;

 
    cout << ">> Action: Playback Mode" << endl;
    device.start_audio();
    cout << endl;

    cout << ">> Action: Recording Mode" << endl;
    device.capture_voice();
    cout << endl;

    device.execute_voice_note();

    return 0;
}



