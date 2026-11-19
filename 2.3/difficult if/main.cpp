#include <iostream>
#include <windows.h>

int main() {

    SetConsoleOutputCP(CP_UTF8);

    int a, b, x;
    
    std::cin >> a >> b >> x;

    if (a <= x && x <= b) {
        std::cout << "точка x лежит на отрезке [a; b]\n";
    } else {
        std::cout << "точка x лежит вне отрезка [a; b]\n";
    }

    // то же самое можно было бы проверить так:
    if (!(x < a || x > b)) {  // отрицание
        std::cout << "точка x лежит на отрезке [a; b]\n";
    } else {
        std::cout << "точка x лежит вне отрезка [a; b]\n";
    }
}