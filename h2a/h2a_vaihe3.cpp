#include <iostream>
#include <string>
#include <memory>

class Student {
private:
    std::string name;
    int studentNumber;
    double average;

public:
    void setName(const std::string& newName) {
        name = newName;
    }

    void setStudentNumber(int newStudentNumber) {
        studentNumber = newStudentNumber;
    }

    void setAverage(double newAverage) {
        average = newAverage;
    }

    std::string getName() const {
        return name;
    }

    int getStudentNumber() const {
        return studentNumber;
    }

    double getAverage() const {
        return average;
    }
};

int main() {
    //smart pointerin unique_ptr käyttö vaikuttaa sopivimmalta, mutta tutkin aihepiirin osalta myös muita vaihtoehtoja. smart pointer vaikutti yksinkertaisesti helpoimmalta
    std::unique_ptr<Student> student = std::make_unique<Student>();

    student->setName("Olli Opiskelija");
    student->setStudentNumber(123456);
    student->setAverage(3.95);

    std::cout <<"Student information: "<< std::endl;
    std::cout <<"Name: "<< student->getName() << std::endl;
    std::cout <<"Student number: "<< student->getStudentNumber() << std::endl;
    std::cout <<"Average: "<< student->getAverage() << std::endl;

    //smart pointerin käyttö vapauttaa nyt muistin, vrt. esim. vaihe2 missä käytettiin komentoa delete
    return 0;
}
