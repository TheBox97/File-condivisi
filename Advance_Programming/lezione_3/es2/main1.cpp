#include<iostream>
#include"header_c.hpp"

int main(){
double t,x{2} ;
    Complex c1,c2,c3;
 c3=c1+c2;
std::cout<<"somma"<<c3;
c1=c3-c2;
std::cout<<"sottrazione"<<c1;
t=c1*c2;
std::cout<<"prodotto"<<t<<std::endl;
std::cout<<"prova"<<c1+x<<std::endl;

    return 0;
}

