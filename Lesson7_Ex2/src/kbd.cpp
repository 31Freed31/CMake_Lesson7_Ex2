#include <iostream>
#include "ram.h"

void input() {
    std::cout << "¬ведите 8 чисел: ";
    for (int i = 0; i < 8; i++) {
        int value;
        std::cin >> value;
        write(i, value);
    }
}
