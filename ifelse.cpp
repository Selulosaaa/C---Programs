#include <iostream>

int main () {
    int angka;

    std::cout << "taruh angka kamu disini: ";
    std::cin >> angka;

    if (angka > 0) {
        std::cout << "Angka kamu positif!\n";
    } else if (angka < 0) {
        std::cout << "angka kamua adalah bilangan negatif\n";
    } else {
        std::cout << "angka kamu adalah nol" << std::endl;
    }
    
    return 0;
}