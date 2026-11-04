#include <iostream>

// this is how to use variable in c++

int main() {
    int a = 10;
    // variable a has been initialized with the value 10
    // print the value of variable a, use std::cout to print the value of variable a
    std::cout << "hasil dari variabel a adalah: " << a << std::endl;

    // lalu belajar replace dari suatu variabel
    int x = 5;
    int b = 3;
    int c = x;
    b = c;
    // variable b has been replaced with the value of variable c
    std::cout << "hasil dari variabel b sudah diganti: " << b << std::endl;

    // double is used to store decimal numbers
    double d = 3.14;
    std::cout << "hasil dari variabel d adalah: " << d << std:: endl;
    
    return 0;
}