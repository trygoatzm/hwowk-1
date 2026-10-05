#include <iostream>
int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {};
    int sum = 0;
    std::cout << "Введите 5 целых чисел:\n";
    for (int i = 0; i < SIZE; i++) {
        std::cin >> numbers[i];
    }

    for (int i = 0; i <= SIZE; i++) {
        sum += numbers[i];
    }
    std::cout << "Сумма: " << sum << '\n';
    return 0;
}