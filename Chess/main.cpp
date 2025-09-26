#include <iostream>
#include <cmath>

int main () {
    int column1, column2, line1, line2;
    std::cin >> column1 >> line1 >> column2 >> line2;
    if ((std::abs(column2 - column1) == std::abs(line2 - line1)) || (column2 == column1 || line2 == line1)) {
      std::cout << "YES";
    }
        else {
        std::cout << "NO";  
        }
}
