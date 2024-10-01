#include <iostream>
#include "cpu.h"
#include "ram.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"

int main() {
    setlocale(LC_CTYPE, "rus");

    std::string command;

    while (true) {
        std::cout << "Введите команду (sum, save, load, input, display, exit): ";
        std::cin >> command;

        if (command == "sum") {
            compute();
        }
        else if (command == "save") {
            save();
        }
        else if (command == "load") {
            load();
        }
        else if (command == "input") {
            input();
        }
        else if (command == "display") {
            display();
        }
        else if (command == "exit") {
            std::cout << "Выход из программы." << std::endl;
            break;
        }
        else {
            std::cout << "Неизвестная команда. Попробуйте снова." << std::endl;
        }
    }

    return 0;
}
