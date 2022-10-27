#include "header_complex.hpp"
int main(){
 
    Complex<int> c1,c2;
auto c3=c1+c2;
std::cout<<"somma"<<std::endl<<c3;
 c1=c3-c2;
std::cout<<"sottrazione"<<std::endl<<c1;
auto t=c1*c2;
std::cout<<"prodotto"<<std::endl<<t<<std::endl;
    return 0;   
    return 0;
}
