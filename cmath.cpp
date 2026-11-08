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
    std::cout << "hasil pembulatan ke bawah" << std::floor(z) << std::endl; // 8
    std::cout << "hasil pembulatan ke atas" << std::ceil(z) << std::endl; // 9
    
    // std::sqrt(x) untuk akar kuadrat
    std::cout << std::sqrt(36) << std::endl; // 6

    // std::pow(x, y) adalah sebuah command untuk perpangkatan
    // x adalah angka yang akan dipankatkan
    // y adalah angka pangkat
    std::cout << std::pow(x, 30) << std::endl; // 8.67362e+41

    // std::fmod(x, y) sisa pembagian desimal
    std::cout << std::fmod(y, 6) << std::endl;
}