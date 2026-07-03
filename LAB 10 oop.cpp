#include <fstream>
#include <iostream>
using namespace std;

int main()
{

/*	ofstream fout("notes.txt");
	fout<<"Hello! How are You?"<<endl;
	fout<<"I'm a Software Engineering Student."<<endl;
	fout<<"Thank You!"<<endl;
	fout.close();
	

	ifstream fin("notes.txt");
	
	string line;
	cout<<"File Data : "<<endl;
	
	while (getline(fin,line))
	{
		cout<<line<<endl;
	}
	fin.close();
	
	ofstream append("notes.txt" , ios::app);
	append<<"Name : jhon"<<endl;
	append.close();
	
	cout<<"Data Successfully Appended."<<endl;
		
	return 0;
}

*/


//______________Task 02_____________

 /*   ifstream fin("notes.txt");
    string line;
    int lineCount = 0;

    while (getline(fin, line))
    {
        lineCount++;
    }

    fin.close();

    cout << "Total Lines : " << lineCount << endl;
}
*/

//_____________Task 03________________



/*  ifstream fin("notes.txt");
    ifstream check("copy.txt");

    string line;

       if (getline(check, line))
    {
        cout << "File is already copied!" << endl;

        fin.close();
        check.close();
        return 0;
    }

    check.close();

    ofstream fout("copy.txt");

    while (getline(fin, line))
    {
        fout << line << endl;
    }

    fin.close();
    fout.close();

    cout << "File Copied Successfully!" << endl;

    return 0;
}
*/

//_____________Task 04_____________



    
    ofstream studentFile("students.txt");

    studentFile << "Student Name\tID" << endl;
    studentFile << "Ali\t101" << endl;
    studentFile << "Ahmed\t102" << endl;
    studentFile << "Sara\t103" << endl;

    studentFile.close();

    
    ifstream readFile("students.txt");

    string record;

    cout << "\n===== Student Record =====\n" << endl;

    while (getline(readFile, record))
    {
        cout << record << endl;
    }

    readFile.close();

    cout << "\nData has been read successfully." << endl;

    return 0;
}






















