#include <iostream>
#include <fstream>
#include "ram.h"

void save() {
    std::ofstream file("data.txt");
    if (file.is_open()) {
        for (int i = 0; i < 8; i++) {
            file << read(i) << " ";
        }
        file.close();
        std::cout << "Данные сохранены." << std::endl;
    }
    else {
        std::cout << "Ошибка при сохранении данных." << std::endl;
    }
}

void load() {
    std::ifstream file("data.txt");
    if (file.is_open()) {
        for (int i = 0; i < 8; i++) {
            int value;
            file >> value;
            write(i, value);
        }
        file.close();
        std::cout << "Данные загружены." << std::endl;
    }
    else {
        std::cout << "Ошибка при загрузке данных." << std::endl;
    }
}
