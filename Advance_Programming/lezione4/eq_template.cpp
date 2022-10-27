 
#include<iostream>
#include"header_eq.hpp"



int main(){
    equation<double> E;
    E.read();
    E.p.getpar();
    E.solve();
    E.write();
    return 0;
}
