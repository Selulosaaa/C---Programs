#include <iostream>
#include <string>

int main() {
    std::string nama; // store a value input

    std::cout << "masukkan nama kamu: ";
    std::getline(std::cin, nama); // untuk membaca input dan menyimpan di variabel nama

    std::cout << "halo " << nama <<std::endl;
    return 0;
}