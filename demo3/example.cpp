
#include "example.h"

Complex::Complex(){}
Complex::Complex(double r, double i) : rpart(r), ipart(i) { }
Complex::Complex(const Complex &c) : rpart(c.rpart), ipart(c.ipart) { }

Complex Complex::operator+(const Complex &c) const{
    Complex d;
    d.rpart = rpart + c.rpart;
    d.ipart = ipart + c.ipart;
    return d;
}
  
double Complex::re() const { return rpart; }
double Complex::im() const { return ipart; }
