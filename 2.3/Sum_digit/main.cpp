#include <iostream>

long long num;
int sum = 0;

int main() {
    std::cin >> num;
    while (num > 0) {
        sum += num % 10;
        num = num / 10;
    }
    std::cout << sum;
}