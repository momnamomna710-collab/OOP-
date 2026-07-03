#include <iostream>

class GeomForm {
public:
    virtual double calculateArea() const {
        return 0.0;
    }
    virtual ~GeomForm() {} 
};


class Box : public GeomForm {
private:
    int sideLength;
    int sideWidth;

public:
    Box(int l, int w) : sideLength(l), sideWidth(w) {}

    double calculateArea() const override {
        return static_cast<double>(sideLength * sideWidth);
    }
};
class RoundForm : public GeomForm {
private:
    int rad;
    const double PI = 3.1415926535; 

public:
    RoundForm(int r) : rad(r) {}

    double calculateArea() const override {
        return PI * rad * rad;
    }
};

int main() {

    GeomForm* myBox = new Box(5, 3);
    GeomForm* myRound = new RoundForm(2);

    
    std::cout << "Rectangle Total Area: " << myBox->calculateArea() << std::endl;
    std::cout << "Circle Total Area:    " << myRound->calculateArea() << std::endl;

  
    delete myBox;
    delete myRound;

    return 0;
}
