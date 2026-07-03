#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string> 

using namespace std;

class StudentRecord 
{
    private:
        string studentName;
        int rollNo;
        float totalMarks;

    public:
       
        void inputDetails() 
        {
            cout << "Enter Student Name: ";
            cin >> studentName;
            cout << "Enter Roll Number: ";
            cin >> rollNo;
            cout << "Enter Marks Obtained (Max 100): ";
            cin >> totalMarks;
        }

    
        void printDetails() 
        {
            cout << "Name: " << studentName << endl;
            cout << "Roll No: " << rollNo << endl;
            cout << "Marks: " << totalMarks << " / 100" << endl;
            cout << "==================================" << endl;
        }
};

#endif
