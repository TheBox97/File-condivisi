 
#include<iostream>
#include<cmath>
#include "header.hpp"
int main(){
    equation E;
    E.p.getpar();
    E.p.askpar();
    E.p.getpar();
    E.solve();
    E.solutions();
    return 0;
}
