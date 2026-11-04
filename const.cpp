#include <iostream>

// this lesson is to know what is a constant in c++

int main() {
    const double harga = 20.7;
    harga = 30.5; // this line will cause an error because harga is a constant and cannot be changed
    // const menghindari perubahan nilai dari suatu variabel.
    // jika ada sebuah perubahan variabel, maka program akan menampilkan error. const digunakan untuk menghindari perubahan nilai dari suatu variabel.
    return 0;
}