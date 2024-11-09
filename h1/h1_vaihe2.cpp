#include <iostream>
#include <iomanip> // käytetään iomanip jotta saadaan std::setprecision toimimaan

// tehdään calcsum
void calcSum(int a, int b) {
    int summa = a + b;
    std::cout <<"Summa: "<< summa << std::endl;
}

// tehdään calcdiv
void calcDiv(int a, int b) {
    if (b !=0) {
        double osamaara = static_cast<double>(a)/b;
        std::cout <<"Osamäärä: "<< std::fixed << std::setprecision(2) << osamaara << std::endl;
    } else { std::cout <<"Jakaja ei voi olla nolla."<< std::endl;
    }
}

int main() {
    int a, b;

    //kysytään käyttäjältä, cout kysyy ja cin merkitsee
    std::cout <<"Anna luku a: ";
    std::cin >> a;
    std::cout <<"Anna luku b: ";
    std::cin >> b;

    //summa nyt calcsum avulla, vrt. vaihe1
    calcSum(a, b);

    //osamäärä nyt calcdiv avulla, vrt. vaihe1
    calcDiv(a, b);

    return 0;
}
