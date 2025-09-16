#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;
    void simplify(); // إضافة دالة التبسيط
    
public:
    Fraction(int num = 0, int denom = 1);
    
    Fraction add(const Fraction& other) const;
    Fraction subtract(const Fraction& other) const;
    Fraction multiply(const Fraction& other) const;
    Fraction divide(const Fraction& other) const;
    
    void display() const;
    
    int getNumerator() const;
    int getDenominator() const;
};

#endif
