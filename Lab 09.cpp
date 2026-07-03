#include <iostream>
class StaffMember {
public:
    virtual double computePay() const {
        std::cout << "Executing default payroll computation..." << std::endl;
        return 0.0;
    }
    virtual ~StaffMember() {} 
};

class SalariedStaff : public StaffMember {
private:
    double basePay;
    double incentives;

public:
    
    SalariedStaff(double bPay, double inc) : basePay(bPay), incentives(inc) {}

    double computePay() const override {
        return basePay + incentives;
    }
};

class HourlyStaff : public StaffMember {
private:
    double ratePerHour;
    int totalHours;

public:
    HourlyStaff(double rate, int hours) : ratePerHour(rate), totalHours(hours) {}

    double computePay() const override {
        return ratePerHour * totalHours;
    }
};

int main() {
    
    StaffMember* staff1 = new SalariedStaff(50000.0, 10000.0);
    StaffMember* staff2 = new HourlyStaff(500.0, 40);
    std::cout << "Salaried Staff Earnings:   $" << staff1->computePay() << std::endl;
    std::cout << "Hourly Staff Earnings:     $" << staff2->computePay() << std::endl;

    delete staff1;
    delete staff2;

    return 0;
}
