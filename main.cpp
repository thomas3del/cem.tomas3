#include <iostream>
#include "fraction.h"

int main() {
    std::cout << "=== Fraction Calculator - cem.tomas3 ===" << std::endl;
    std::cout << "========================================" << std::endl;
    
    Fraction f1(1, 2);
    Fraction f2(1, 3);
    Fraction f3(3, 4);
    Fraction f4(2, 5);
    
    std::cout << "1/2 + 1/3 = ";
    Fraction result = f1.add(f2);
    result.display();
    std::cout << std::endl;
    
    std::cout << "3/4 - 2/5 = ";
    result = f3.subtract(f4);
    result.display();
    std::cout << std::endl;
    
    std::cout << "1/2 * 3/4 = ";
    result = f1.multiply(f3);
    result.display();
    std::cout << std::endl;
    
    std::cout << "1/2 / 1/3 = ";
    result = f1.divide(f2);
    result.display();
    std::cout << std::endl;
    
    std::cout << "========================================" << std::endl;
    std::cout << "Program executed successfully!" << std::endl;
    
    return 0;
}