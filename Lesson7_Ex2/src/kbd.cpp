#include <iostream>
#include "ram.h"

void input() {
    std::cout << "������� 8 �����: ";
    for (int i = 0; i < 8; i++) {
        int value;
        std::cin >> value;
        write(i, value);
    }
}
