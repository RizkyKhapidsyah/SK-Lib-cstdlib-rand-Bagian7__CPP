#include <cstdlib>
#include <iostream>
#include <ctime>
#include <conio.h>

/*
    Source by CPPReference (https://en.cppreference.com)
    Modified For Learn by RK
    I.D.E : VS2022
*/

int main() {
    std::srand(std::time(nullptr)); // gunakan waktu saat ini sebagai seed untuk generator acak
    int random_variable = std::rand();
    std::cout << "Random value on [0 " << RAND_MAX << "]: " << random_variable << '\n';

    // lempar dadu bersisi 6 sebanyak 20 kali
    for (int n = 0; n != 20; ++n) {
        int x = 7;

        while (x > 6) {
            x = 1 + std::rand() / ((RAND_MAX + 1u) / 6);  // Note: 1+rand()%6 is biased
        }

        std::cout << x << ' ';
    }

    _getch();
    return 0;
}