#ifndef HEADER_HPP_INCLUDED
#define HEADER_HPP_INCLUDED


#include<iostream>
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
    friend Complex<M> operator+(const Complex<M>& c ,const C& a);
    template<typename M,typename C>
    friend Complex<M> operator+(const C& a,const Complex<M>& c);
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
Complex<M> operator+(const Complex<M>& c,const C& a){
    Complex<M> result;
    result.real= c.real +a;
    result.immaginary=c.immaginary;
    return result;
};

template<typename M,typename C>
Complex<M> operator+(const C& a,const Complex<M>& c){
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

template<typename E,typename F>
auto sum(E& a,F& b){
    
 auto c= a+b;
   return c;
}

template<typename D,typename... Types>
auto sum(D& last,Types... args){
   auto result=last + sum(args...) ;// ATTENZIONE QUA sum(args..) sembra non avere una referenza. Funziona se tolgo & da tutti gli overload. Funziona anche se nell'overload+ uso constant reference.   
    
    return result;
}

 

#endif


 // HEADER_HPP_INCLUDED
