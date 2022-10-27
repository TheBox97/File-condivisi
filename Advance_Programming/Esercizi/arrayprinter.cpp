#include<iostream>

void arrayprinter(int* A, int*stop=nullptr){
if (stop==nullptr){
    stop=A+4;
}
if (A==stop){
    std::cout<<*A<<std::endl;    
}else{
    std::cout<<*A<<std::endl;
    arrayprinter((A+1),stop);
}
}

int main() {
 int a[5]{3,5,7,3,2};
 arrayprinter(a);
    
    return 0;
}


