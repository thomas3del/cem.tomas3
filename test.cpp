#include <iostream>
#include "fraction.h"
#include <cassert>

void testFractionOperations() {
    std::cout << "Starting tests..." << std::endl;
    
    // Test 1: Addition
    Fraction f1(1, 2);
    Fraction f2(1, 3);
    Fraction result = f1.add(f2);
    assert(result.getNumerator() == 5 && result.getDenominator() == 6);
    std::cout << "Addition test passed" << std::endl;
    
    // Test 2: Subtraction
    Fraction f3(3, 4);
    Fraction f4(1, 2);
    result = f3.subtract(f4);
    assert(result.getNumerator() == 1 && result.getDenominator() == 4);
    std::cout << "Subtraction test passed" << std::endl;
    
    // Test 3: Multiplication
    Fraction f5(2, 3);
    Fraction f6(3, 4);
    result = f5.multiply(f6);
    assert(result.getNumerator() == 1 && result.getDenominator() == 2);
    std::cout << "Multiplication test passed" << std::endl;
    
    // Test 4: Division
    Fraction f7(1, 2);
    Fraction f8(2, 3);
    result = f7.divide(f8);
    assert(result.getNumerator() == 3 && result.getDenominator() == 4);
    std::cout << "Division test passed" << std::endl;
    
    std::cout << "All tests passed! ✅" << std::endl;
}

int main() {
    testFractionOperations();
    return 0;
}