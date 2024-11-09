#include <iostream>
#include <iomanip> // käytetään iomanip jotta saadaan std::setprecision toimimaan

// tehdään calcsum
void calcSum(int a, int b) {
    int summa = a + b;
    std::cout <<"Summa (calcSum): "<< summa << std::endl;
}

// tehdään calcdiv
void calcDiv(int a, int b) {
    if (b !=0) {
        double osamaara = static_cast<double>(a)/b;
        std::cout <<"Osamäärä (calcDiv): "<< std::fixed << std::setprecision(2) << osamaara << std::endl;
    } else { std::cout <<"Jakaja ei voi olla nolla (calcDiv)."<< std::endl;
    }
}

// laskee ja palauttaa summan
int retSum(int a, int b) {
    return a + b;
}

// laskee ja palauttaa osamäärän
float retDiv(int a, int b) {
    if (b !=0) {
        return static_cast<float>(a)/b;
    } else {
        std::cout <<"Jakaja ei voi olla nolla (retDiv)."<< std::endl;
        return 0;
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

    //retsum kutsuminen
    int summa = retSum(a, b);
    std::cout <<"Summa (retSum): "<< summa << std::endl;

    //retdiv kutsuminen
    float osamaara = retDiv(a, b);
    std::cout <<"Osamäärä (retDiv): "<< std::fixed << std::setprecision(2) << osamaara << std::endl;

    return 0;
}
