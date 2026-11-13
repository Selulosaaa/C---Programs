#include <iostream>

// math expression is a combintion of numbers, variables, and operators that can be evaluated to produce a value. In C++, math expressions can be used to perform calculations and manipulate data.
// it have so many variations of math expression, such as addition, subtraction, multiplication, division, and modulus.
int main() {
    // angka yang dipakai
    int x = 10;
    int y = 4;
    // addition
    int z = x + y;
    std::cout << "hasil pertambahan adalah: " << z << std:: endl;
    // pembagian
    int b = x / y; // angka yang bulat
    double a = x / y; // angka dengan desimal
    std::cout << "hasil pembagian bulatnya adalah: " << b << std:: endl;
    std::cout << "hasil pembagian dengan desimal adalah: " << a << std:: endl;

    int angka1 = 10;
    int angka2 = 30;
    std::cout << "hasil perkaliannya adalah " << angka1 * angka2 << std:: endl;

    return 0;
}