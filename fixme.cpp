#include <iostream>

int main() {
    int x = 10;
    int y = 0;
    // Исправление: проверяем делитель
    if (y != 0) {
        int z = x / y;
        std::cout << "Result: " << z << std::endl;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
    }
    int y = 2;  // Исправление: меняем 0 на 2
    int z = x / y;
    std::cout << "Result: " << z << std::endl;
    return 0;
}