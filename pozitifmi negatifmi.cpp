#include <iostream>

int main() {
    int sayi;

    std::cout << "Bir sayi girin: ";
    std::cin >> sayi;

    if (sayi > 0) {
        std::cout << "Girilen sayi pozitif.";
    } else if (sayi < 0) {
        std::cout << "Girilen sayi negatif.";
    } else {
        std::cout << "Girilen sayi sifir.";
    }

    return 0;
}

