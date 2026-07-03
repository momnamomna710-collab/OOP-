#include <iostream>
#include "rectangle.h" 

using namespace std;

int main() 
{
    RectangleShape box;

    cout << "==================================" << endl;
    cout << "     RECTANGLE DATA ENTRY        " << endl;
    cout << "==================================" << endl;
    box.getDimensions();

    cout << "\n==================================" << endl;
    cout << "       CALCULATION RESULTS        " << endl;
    cout << "==================================" << endl;
    box.showArea();
    box.showPerimeter();
    cout << "==================================" << endl;

    return 0;
}
