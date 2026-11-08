#include <iostream>
#include <cmath>

int main () {
    // cmath adalah library yang spesifik untuk fungsi matematika
    double x = -25;
    double y = 20;
    double z = 8.86;

    // std::abs(x) adalah mengunci angka menjadi nilai absolut nya yaitu bilangan positif
    std::cout << std::abs(x) << std::endl; // 25

    // std::round(x) mencari pembulatan terdekat ke bilangan bulat
    std::cout << std::round(z) << std::endl; // 9

    // std::floor(x) dan std::ceil(x) adalah sebuah sistem pembulatan
    // std::floor(x) untuk pembulatan ke bawah
    // std::ceil(x) untuk pemvulatan ke atas
    std::cout << std::floor(z) << std::endl;
    std::cout << std::ceil(z) << std::endl;
    
    return 0;
}