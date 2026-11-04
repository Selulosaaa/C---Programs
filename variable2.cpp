#include <iostream>

int main() {
    int a = 2;
    int b = 5;
    int x = a;
    a = b;
    b = x;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    return 0;
}