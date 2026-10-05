#include <iostream>
int main() {
    const int SIZE = 5;
    int numbers[SIZE] = {};
    int sum = 0;
    std::cout << "Введите 5 целых чисел:\n";
    for (int i = 0; i < SIZE; i++) {
        if (!(std::cin >> numbers[i])) {
            std::cout << "Ошибка ввода.\n";
            return 1;
        }
    }
    for (int i = 0; i < SIZE; i++) {
        sum += numbers[i];
    }
    std::cout << "Сумма: " << sum << '\n';
    return 0;
}
