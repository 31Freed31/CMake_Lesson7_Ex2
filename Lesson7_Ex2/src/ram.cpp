#include <iostream>

int ram[8];

void write(int index, int value) {
    if (index >= 0 && index < 8) {
        ram[index] = value;
    }
}

int read(int index) {
    if (index >= 0 && index < 8) {
        return ram[index];
    }
    return 0;
}
