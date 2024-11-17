#include <iostream>

class Rectangle {

private:
    double width;
    double height;

public:
    void setWidth(double newWidth) {
        if (newWidth > 0) {
            width = newWidth;
        } else {
            std::cerr <<"Input has to be positive"<< std::endl;
        }
    }

    void setHeight(double newHeight) {
        if (newHeight > 0) {
            height = newHeight;
        } else {
            std::cerr <<"Input has to be positive"<< std::endl;
        }
    }

    double getArea() const {
        return width * height;
    }

    double getCircum() const {
        return 2 * (width + height);
    }
};

int main() {
    Rectangle* rect = new Rectangle;

    rect->setWidth(10);
    rect->setHeight(3.5);

    std::cout <<"Area: "<< rect->getArea() << std::endl;
    std::cout <<"Circumference: "<< rect->getCircum() << std::endl;

    delete rect;
    return 0;
}
