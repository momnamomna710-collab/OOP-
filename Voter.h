#ifndef VOTER_H
#define VOTER_H

#include <iostream>
#include <string>

using namespace std;

class VoterRegistration 
{
    private:
        string citizenName;
        int citizenAge;

    public:
        void getVoterInfo() 
        {
            cout << "Enter Citizen Name: ";
            cin >> citizenName;
            cout << "Enter Citizen Age: ";
            cin >> citizenAge;
        }

        bool checkEligibility() 
        {
            if (citizenAge >= 18) 
            {
                return true;
            }
            else 
            {
                return false;
            }
        }

        string getName() 
        {
            return citizenName;
        }
};

#endif
