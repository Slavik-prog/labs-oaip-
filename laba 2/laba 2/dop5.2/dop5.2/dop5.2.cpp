#include <iostream>

int main() {
    // Начало
    double x, y, z;

    // Ввод x, y, z
    std::cout << "Введите x, y, z: ";
    std::cin >> x >> y >> z;

    // Вычисление суммы и произведения
    double sum = x + y + z;
    double product = x * y * z;

    // Определение максимального значения
    double maxValue;
    if (sum >= product) {
        maxValue = sum;
    }
    else {
        maxValue = product;
    }

    // Результат
    double result = maxValue * 3;

    // Вывод результата
    std::cout << "Результат: " << result << std::endl;

    // Конец
    return 0;
}