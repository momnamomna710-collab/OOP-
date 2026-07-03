#include <iostream>
#include <string>

using namespace std;

/*struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

   
    void displayStudentInfo() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Full Name: " << firstName << " " << lastName << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
  
    Student s1;

 
    s1.firstName = "John";
    s1.lastName = "Doe";
    s1.rollNumber = 101;
    s1.marks = 88.5;


    s1.displayStudentInfo();

    return 0;
}
*/





#include <iostream>
#include <string>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    int rollNumber;
    float marks;

    void displayStudentInfo() {
        cout << "Name: " << firstName << " " << lastName 
             << " | Roll No: " << rollNumber 
             << " | Marks: " << marks << endl;
    }
};

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    
    Student students[numStudents];
    Student* ptr;

    
    for (int i = 0; i < numStudents; i++) {
        ptr = &students[i]; 

        cout << "\nEntering details for student " << i + 1 << ":" << endl;
        cout << "First Name: ";
        cin >> ptr->firstName; 
        cout << "Last Name: ";
        cin >> ptr->lastName;
        cout << "Roll Number: ";
        cin >> ptr->rollNumber;
        cout << "Marks: ";
        cin >> ptr->marks;
    }

    cout << "\nDisplaying all student records:" << endl;
    cout << "--------------------------------" << endl;

  
    for (int i = 0; i < numStudents; i++) {
        ptr = &students[i];
        ptr->displayStudentInfo();
    }

    return 0;
}
