#include <iostream>

int main() {
    int angka;
    int angka2;

    std::cout << "Selamat Datang di Kalkulator sederhana!" << std::endl;
    std::cout << "Kami harus tau angka yang kamu mau masukin" << std::endl;

    std::cout << "Masukkan angka pertama";
    std::cin >> angka;

    std::cout << "masukkan angka kedua";
    std::cin >> angka2;

    int hasil = angka + angka2;
    std::cout << "hasil dari pertambahan angka yang kamu masukkan adalah: " << hasil << std::endl;

}
