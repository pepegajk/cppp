#include <iostream>
#include <vector>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Rus");
    std::vector<std::vector<double>> matrix(3, std::vector<double>(5));

    for (int i = 0; i < 3; ++i) {
        std::cout << "Введите 5 элементов для строки " << i + 1 << ":\n";
        for (int j = 0; j < 5; ++j) {
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; ++i) {
        double sum = 0.0;
        for (int j = 0; j < 5; ++j) {
            sum += matrix[i][j];
        }
        double average = sum / 5;
        std::cout << "Среднее арифметическое элементов строки " << i + 1 << ": " << average << "\n";
    }

    return 0;
}
