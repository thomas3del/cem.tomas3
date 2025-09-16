#include <iostream>
#include "fraction.h"

int main() {
    std::cout << "=== Fraction Calculator - cem.tomas3 ===" << std::endl;
    std::cout << "========================================" << std::endl;
    
    int num1, den1, num2, den2;
    char operation;
    
    // إدخال الكسر الأول
    std::cout << "Enter first fraction (numerator denominator): ";
    std::cin >> num1 >> den1;
    
    // إدخال العملية
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> operation;
    
    // إدخال الكسر الثاني  
    std::cout << "Enter second fraction (numerator denominator): ";
    std::cin >> num2 >> den2;
    
    // إنشاء الكسور
    Fraction f1(num1, den1);
    Fraction f2(num2, den2);
    Fraction result;
    
    // تنفيذ العملية
    switch(operation) {
        case '+':
            result = f1.add(f2);
            break;
        case '-':
            result = f1.subtract(f2);
            break;
        case '*':
            result = f1.multiply(f2);
            break;
        case '/':
            result = f1.divide(f2);
            break;
        default:
            std::cout << "Invalid operation!" << std::endl;
            return 1;
    }
    
    // عرض النتيجة
    std::cout << "Result: ";
    f1.display();
    std::cout << " " << operation << " ";
    f2.display(); 
    std::cout << " = ";
    result.display();
    std::cout << std::endl;
    
    return 0;
}
