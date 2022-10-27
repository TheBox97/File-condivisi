#ifndef HEADER_HPP_INCLUDED
#define HEADER_HPP_INCLUDED

 #include<iostream>


template<typename T>
    class Complex{
    public:
        T real;
        T immaginary;
    Complex();
     Complex operator+(Complex<T>& c1);
     Complex operator-(Complex<T>& c) ;
     T operator*(Complex<T>& c);
     template<typename M>
     friend std::ostream& operator<<(std::ostream& os, const Complex<T>& c); 
    }; 
    template<typename T>
Complex<T>::Complex(){
real=5;
immaginary=5;
};
template<typename T>
Complex<T> Complex<T>::operator+(Complex<T>& c1){
    Complex result;
    result.real= real +c1.real;
    result.immaginary=immaginary+c1.immaginary;
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



#endif // HEADER_HPP_INCLUDED
