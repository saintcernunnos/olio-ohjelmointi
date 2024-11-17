#include <iostream>
#include <string>
#include <vector>

class Car {
private:
    std::string brand;
    std::string model;
    int yearModel;

public:
    //konstruktori
    Car(const std::string& brand, const std::string& model, int yearModel) : brand(brand), model(model), yearModel(yearModel) {}

    void printData() const {
        std::cout <<"Brand: "<< brand
                  <<", Model: "<< model
                  <<", Year model: "<< yearModel << std::endl;
    }
};

int main() {
    //vektori
    std::vector<Car> carList;

    //autot
    Car car1("Pagani", "Huayra", 2011);
    Car car2("Lamborghini", "Aventador", 2015);
    Car car3("Koenigsegg", "Agera", 2018);

    //listaan
    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    //toisen alkion tulostus
    std::cout <<"The second car of the list: "<< std::endl;
    carList[1].printData();

    //katsoin ohjeen tapaa tulostaa tiedot (for(int x=0; x<=4; x++)... jne
    //käytetty tapa on pyöritelty tekoälyn avustuksella, vaikutti tehokkaalta käyttää const auto&.
    //tekoäly viittasi ohjeen toteutusta manuaaliseksi ja vertasi em. tavan käyvän automaattisesti läpi koko listan -> onkohan parempi? vaikutti kuitenkin kätevältä, joten pistin käyttöön.
    std::cout <<"\nAll cars of the list: "<< std::endl;
    for (const auto& car : carList) {
        car.printData();
    }

    return 0;
}
