#include "header.hpp"
int main (){
    
    int a{0},b{5},c{1};
    double x{3.5},y{4.7},z{0};
Complex<double> c1,c2;
 
 
    auto result=sum(c1,a,x,y,c2,z,b,c);
    std::cout<<result<<std::endl;
    
    return 0;
}
