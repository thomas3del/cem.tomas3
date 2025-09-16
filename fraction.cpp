#include "fraction.h"
#include <iostream>
#include <algorithm>
#include <cmath>

// دالة مساعدة لإيجاد القاسم المشترك الأكبر
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// دالة تبسيط الكسور
void Fraction::simplify() {
    if (denominator == 0) return;
    
    int gcd = findGCD(std::abs(numerator), std::abs(denominator));
    if (gcd != 0) {
        numerator /= gcd;
        denominator /= gcd;
    }
    
    if (denominator < 0) {
        numerator = -numerator;
        denominator = -denominator;
    }
}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {
    if (denominator == 0) denominator = 1;
    simplify(); // نسمي دالة التبسيط هنا
}

Fraction Fraction::add(const Fraction& other) const {
    int num = numerator * other.denominator + other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

Fraction Fraction::subtract(const Fraction& other) const {
    int num = numerator * other.denominator - other.numerator * denominator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

Fraction Fraction::multiply(const Fraction& other) const {
    int num = numerator * other.numerator;
    int denom = denominator * other.denominator;
    return Fraction(num, denom);
}

Fraction Fraction::divide(const Fraction& other) const {
    int num = numerator * other.denominator;
    int denom = denominator * other.numerator;
    return Fraction(num, denom);
}

void Fraction::display() const {
    std::cout << numerator << "/" << denominator;
}

int Fraction::getNumerator() const { 
    return numerator; 
}

int Fraction::getDenominator() const { 
    return denominator; 
}
