#include<iostream>
#include "header_c.hpp"
  Complex::Complex(){
real=5;
immaginary=5;
};
Complex Complex::operator+(Complex& c1){
    Complex result;
    result.real= real +c1.real;
    result.immaginary=immaginary+c1.immaginary;
    return result;
};
Complex Complex::operator-(Complex& c){
    Complex result;
    result.real=real - c.real;
    result.immaginary=immaginary-c.immaginary;
    return result;
};
double Complex::operator*(Complex& c){
    double result ;
    result=real*c.real - immaginary*c.immaginary;
    return result ;
};
Complex operator+(Complex& c,double x){
    Complex result;
    result.real= x +c.real;
    result.immaginary=x+c.immaginary;
    return result;
}

std::ostream& operator<<(std::ostream& os, const Complex& c){
    os<<c.real<<" +i"<<c.immaginary<<std::endl;
    return os;
};
