#include <iostream>
#include <cmath>
template<typename T>
    class Complex{
    public:
        T real;
        T immaginary;
    Complex();
     Complex operator+(Complex<T> c1);
     Complex operator-(Complex<T>& c) ;
     T operator*(Complex<T>& c);
     template<typename M,typename C>
    friend Complex<M> operator+(Complex<M> c , C a);
    template<typename M,typename C>
    friend Complex<M> operator+(C a,Complex<M> c);
     template<typename M>
     friend std::ostream& operator<<(std::ostream& os, const Complex<M>& c); 
    }; 
    template<typename T>
Complex<T>::Complex(){
real=5;
immaginary=5;
};
template<typename T>
Complex<T> Complex<T>::operator+(Complex<T> c1){
    Complex result;
    result.real= real +c1.real;
    result.immaginary=immaginary+c1.immaginary;
    return result;
};
template<typename M,typename C>
Complex<M> operator+(Complex<M> c,C a){
    Complex<M> result;
    result.real= c.real +a;
    result.immaginary=c.immaginary;
    return result;
};

template<typename M,typename C>
Complex<M> operator+(C a,Complex<M> c){
    Complex<M> result;
    result.real= c.real +a;
    result.immaginary=c.immaginary;
    return result;
};
template<typename T>
Complex<T> Complex<T>::operator-(Complex<T>& c){
    Complex result;
    result.real=real - c.real;
    result.immaginary=immaginary-c.immaginary;
    return result;
};
template<typename T>
T Complex<T>::operator*(Complex<T>& c){
    double result ;
    result=real*c.real - immaginary*c.immaginary;
    return result ;
};
template<typename M>
std::ostream& operator<<(std::ostream& os, const Complex<M>& c){
    if constexpr(std::is_same_v<int,M>){
        std::cout<<"we are dealing with int"<<std::endl;
         os<<c.real<<" +i"<<c.immaginary<<std::endl;
    }
    if constexpr(std::is_same_v<double,M>){
        std::cout<<"we are dealing with double"<<std::endl;
         os<<c.real<<" +i"<<c.immaginary<<std::endl;
    }
    return os;
};
template<typename T,typename M>
void print(T& p,M& x){
    std::cout<<p+x<<std::endl;
}
template<typename E,typename F>
auto sum(E a,F b){
    
 auto c= a+b;
   return c;
}

template<typename D,typename... Types>
auto sum(D last,Types... args){
   auto result=last + sum(args...) ;// ATTENZIONE QUA sum(args..) sembra non avere una referenza. Funziona se tolgo & da tutti gli overload.  
    
    return result;
}

int main (){
    
    int a{0},b{5},c{1};
    double x{3.5},y{4.7},z{0};
Complex<double> c1,c2;
 
 
    auto result=sum(c1,a,x,y,c2,z,b,c);
    std::cout<<result<<std::endl;
    
    return 0;
}


