#include <iostream>
#include "ram.h"

void display() {
    std::cout << "������ � ����������� ������: ";
    for (int i = 0; i < 8; i++) {
        std::cout << read(i) << " ";
    }
    std::cout << std::endl;
}
