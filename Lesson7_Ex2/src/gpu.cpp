#include <iostream>
#include "ram.h"

void display() {
    std::cout << "Данные в оперативной памяти: ";
    for (int i = 0; i < 8; i++) {
        std::cout << read(i) << " ";
    }
    std::cout << std::endl;
}
