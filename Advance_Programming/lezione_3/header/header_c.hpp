#include<iostream>


    class Complex{
    public:
        double real;
double immaginary;
    Complex();
     Complex operator+(Complex& c1);
     Complex operator-(Complex& c) ;
     double operator*(Complex& c);
     friend std::ostream& operator<<(std::ostream& os, const Complex& c); 
     friend Complex operator+(Complex c, double x);
    }; 
