#include <iostream>
    struct Complex{
double real;
double immaginary;
    Complex(){
        real=0;
        immaginary=0;
    }
  
    void conjugate(){
        immaginary=-immaginary;
    }
    void print() {
        std::cout<<real<<"+i("<<immaginary<<")"<<std::endl;
    }
};

int main(){
Complex c1,c2;
c1.real=1;
c1.immaginary=2;
c2=c1;
std::cout<<"Proviamo a stampare c"<<std::endl;
c1.print();
std::cout<<"Proviamo a stampare c.conjugate"<<std::endl;
c1.conjugate();
c1.print();
c2.print();
return 0;
}
