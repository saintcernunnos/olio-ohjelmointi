#include <iostream>
#include <iomanip> // käytetään iomanip jotta saadaan std::setprecision toimimaan

int main() {
    int a, b;

    //kysytään käyttäjältä, cout kysyy ja cin merkitsee
    std::cout <<"Anna luku a: ";
    std::cin >> a;
    std::cout <<"Anna luku b: ";
    std::cin >> b;

    //summa
    int summa = a + b;
    std::cout <<"Summa: "<< summa << std::endl;

    //osamäärä
    if (b !=0) {
        // desimaaleja vain kaksi, ei välttämättä tarpeen muuntaa doubleksi, mutta mielestäni hyvä ratkaisu oppia jos koskaan tarvii useampia desimaaleja vrt float
        double osamaara = static_cast<double>(a)/b;
        std::cout << "Osamäärä: " << std::fixed << std::setprecision(2) << osamaara << std::endl;
    } else {
        std::cout <<"Jakaja ei voi olla nolla." << std::endl;
    }
    return 0;
}
