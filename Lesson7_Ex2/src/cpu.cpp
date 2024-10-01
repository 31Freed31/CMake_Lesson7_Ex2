#include <iostream>
#include "ram.h"

void compute() {
    int sum = 0;
    for (int i = 0; i < 8; i++) {
        sum += read(i);
    }
    std::cout << "Сумма чисел: " << sum << std::endl;
}
