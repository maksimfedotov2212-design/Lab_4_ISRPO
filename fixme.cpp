#include <iostream>

int main() {
    int x = 10;
    int y = 0;
    // Здесь будет деление на ноль, если не исправить
    int z = x / y;
    std::cout << "Result: " << z << std::endl;
    return 0;
}
