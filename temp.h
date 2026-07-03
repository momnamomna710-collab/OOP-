#ifndef TEMPERATURE_H
#define TEMPERATURE_H

#include <iostream>
using namespace std;

class TempConverter 
{
    private:
        float celsiusValue;
        float fahrenheitValue;

    public:
        void getTemperature() 
        {
            cout << "Enter Temperature in Celsius: ";
            cin >> celsiusValue;
        }
        void calculateFahrenheit() 
        {
            fahrenheitValue = (celsiusValue * 9.0 / 5.0) + 32.0;
        }

        void printResult() 
        {
            cout << "Temperature in Celsius    : " << celsiusValue << " C" << endl;
            cout << "Converted to Fahrenheit   : " << fahrenheitValue << " F" << endl;
        }
};

#endif
