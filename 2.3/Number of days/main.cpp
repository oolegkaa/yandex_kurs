#include <iostream>

int main() {
    int year, month;
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    std::cin >> month >> year;
    if ((year % 400 == 0) || ((year % 4 == 0) && !(year % 100 == 0))) {
        days[1] = 29;
    }
    std::cout << days[month-1];
}