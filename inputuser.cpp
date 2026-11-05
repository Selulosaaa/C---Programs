#include <iostream>
#include <string> // agar bisa menyimpan variabel string

int main() {
    // INPUT DENGAN STRING
    std::string nama;

    std::cout << "input nama kamu disini ";
    std::getline(std::cin, nama); // nama adalah tujuan input akan disimpan

    std::cout << "hai selamat datang " << nama << std::endl;
    
    // INPUT DENGAN INT ATAU DOUBLE
    // tidak seperti string, int atau double bisa langsungan(tanpa std)

    int angka;
    double angka2;
    
    std::cout << "input angka kamu";
    std::cin >> angka; // langsung tanpa std dan getline dan langsung dapat disimpan

    std::cout << "input angka desimal";
    std::cin >> angka2;

    std::cout << "angka pertama: " << angka << std::endl;
    std::cout << "angka kedua: " << angka2 << std:: endl;
    return 0;
}