#include <iostream>
#include <cmath>

int main () {
    // variabel
    double angka_1;
    double angka_2;
    int operasi;

    std::cout << "masukkan angka pertama: ";
    std::cin >> angka_1;

    std::cout << "masukkan angka kedua: ";
    std::cin >> angka_2;

    std::cout << "pilih opersi yang diinginkan: " << std::endl;
    std::cout << "1. Pertambahan" << std::endl;
    std::cout << "2. pengurangan" << std::endl;
    std::cout << "3. perkalian" << std::endl;
    std::cout << "4. pembagian" << std::endl;

    std::cout << "input operasi(1/2/3/4)";
    std::cin >> operasi;

    if (operasi == 1) {
        std::cout << "hasil dari pertambahan adalah: " << angka_1 + angka_2 << std::endl;
    } else if (operasi == 2) {
        std::cout << "hasil dari pengurangan adalah: " << angka_1 - angka_2 << std::endl;
    } else if (operasi == 3) {
        std::cout << "hasil dari pengurangan adalah: " << angka_1 * angka_2 << std::endl;
    } else if (operasi == 4) {
        if (angka_2 == 0) {
            std::cout << "Tidak bisa dibagi nol!" << std::endl;
            return 1;
        }
        std::cout << "hasil dari pembagian adalah: " << angka_1 / angka_2 << std::endl;
    } else {
        std::cout << "Pilihan tidak valid" << std::endl;
        return 1;
    }

    return 0;
}