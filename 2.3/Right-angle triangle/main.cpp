#include <iostream>
#include <algorithm>

int main() {
    long long a, b, c;
    std::cin >> a >> b >> c;

    long long s[3] = {a, b, c};
    std::sort(s, s + 3);

    // Если треугольник не существует
    if (s[0] + s[1] <= s[2]) {
        std::cout << "UNDEFINED";
        return 0;
    }

    // Проверка теоремы Пифагора в целых числах
    if (s[0] * s[0] + s[1] * s[1] == s[2] * s[2]) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}