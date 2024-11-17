#include <iostream>
#include <string>

class Car {

private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    void printData () const {
        std::cout <<"Brand: "<< brand << "\n"
                  <<"Model: "<< model << "\n"
                  <<"Year model: "<< yearModel << std::endl;
    }

    void setBrand(const std::string& newBrand) {
        brand = newBrand;
    }

    void setModel(const std::string& newModel) {
        model = newModel;
    }

    void setYearModel(int newYearModel) {
        yearModel = newYearModel;
    }
};

int main () {
    Car myCar;

    myCar.setBrand("Ferrari");
    myCar.setModel("Enzo");
    myCar.setYearModel(2002);

    myCar.printData();

    return 0;
}
