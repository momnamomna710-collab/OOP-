#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
using namespace std;

class RectangleShape 
{
    private:
        float length;
        float width;

    public:
        void getDimensions() 
        {
            cout << "Enter Length of Rectangle: ";
            cin >> length;
            cout << "Enter Width of Rectangle: ";
            cin >> width;
        }
        void showArea() 
        {
            float area = length * width;
            cout << "Total Area      : " << area << " sq. units" << endl;
        }
        void showPerimeter() 
        {
            float perimeter = 2 * (length + width);
            cout << "Total Perimeter : " << perimeter << " units" << endl;
        }
};

#endif
