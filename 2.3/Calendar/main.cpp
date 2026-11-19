#include <iostream>

int num_day_of_week, sum_days;
int column = 0;

int main() {
    std::cin >> num_day_of_week >> sum_days;
    while (column + 1 < num_day_of_week) {      // Строим пустые клеточки начала календаря
        std::cout << "   ";
        column += 1;
    }
    for (int i = 1; i <= sum_days; ++i) {
        if (i < 10) {
            std::cout << " " << i;
        } else {
            std::cout << i;
        }
        if (column == 6) {
            std::cout << "\n";
        } else {
            std::cout << " ";
        }
        column = (column + 1) % 7;
    }
}