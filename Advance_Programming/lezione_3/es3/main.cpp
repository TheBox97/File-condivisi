#include<iostream>
#include<header.hpp>



int main(){
    equation E;
    E.read();
    E.p.getpar();
    E.solve();
    E.write();
    return 0;
}
