#include <iostream>
#include <cmath>

int main() {
    double a,b,c;
    std::cin >> a >> b >> c;
    if ((pow(a, 2) + pow(b, 2) == pow(c, 2)) ||  (pow(a, 2) + pow(c, 2) == pow(b, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2))) {
        std::cout << "YES";
    }
    else if ((a + b < c) || (a + c < b) || (b + c < a)) {
        std::cout << "UNDEFINED";
    }   
    else {
        std::cout << "NO";
        }
}