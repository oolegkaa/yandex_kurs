#include <iostream>
#include <cmath>

int num;
double sum_ln = 0.0;

int main() {
    std::cin >> num;
    for (int i = 1; i <= num; ++i) {
        sum_ln += (std::pow(-1, i+1)/i);
    }
    std::cout << sum_ln;
}