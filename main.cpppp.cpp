#include <iostream>
#include "temp.h"

using namespace std;

int main() 
{
    TempConverter currentTemp;

    cout << "==================================" << endl;
    cout << "   TEMPERATURE CONVERTER SYSTEM   " << endl;
    cout << "==================================" << endl;
    
    currentTemp.getTemperature();
    currentTemp.calculateFahrenheit();

    cout << "\n==================================" << endl;
    cout << "         CONVERSION REPORT        " << endl;
    cout << "==================================" << endl;
    
    currentTemp.printResult();
    
    cout << "==================================" << endl;

    return 0;
}
