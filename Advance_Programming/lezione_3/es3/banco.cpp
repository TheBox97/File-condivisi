#include<iostream>

class Cord{
public:
    double x1,x2;
   friend std::ostream& operator<<(std::ostream& os, const Cord& c);
   friend std::ifstream& operator>>(std::ifstream& os, const Cord& c);
};
std::ostream& operator<<(std::ostream& os, const Cord& c){
    os<<c.x1<<" "<<c.x2<<std::endl;
    return os;
};
std::ifstream& operator>>(std::ifstream& os, const Cord& c){
    os>>c.x2>>c.x2;
    return os;
};

int 
