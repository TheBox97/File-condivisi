 
#ifndef HEADER
#define HEADER
#include<iostream>
#include<fstream>
#include<cmath>
template<typename T>
class equation {
    struct Complex{
        T real;
        T immaginary;
    Complex();
    void print();
    void conjugate();
    };
    class Parametri{
        public:
    T a;
    T b;
    T c;

    Parametri();
    void getpar();
    void askpar();
    };
    T delta,fract;
public:
         Parametri p; 
        Complex c1,c2;
        equation();
        void solve();
        void solutions();
        void write();
        void read();
};
template<typename T>
equation<T>::Complex::Complex(){
        real=0;
        immaginary=0;
    };
    template<typename T>
    void equation<T>::Complex::print(){
        std::ofstream file;
        file.open("Soluzioni.txt",std::ios_base::app);
          file<<real<<"+i("<<immaginary<<")"<<std::endl;
    };
    template<typename T>
    void equation<T>::Complex::conjugate(){
        immaginary=-immaginary;
    };
    template<typename T>
  equation<T>::Parametri::Parametri(){
        a=0;
        b=0;
        c=0;
    };
    template<typename T>
    void equation<T>::Parametri::getpar(){
        std::cout<<"The parameters are:"<<std::endl;
        std::cout<<a<<" "<<b<<" "<<c<<std::endl;
    };
    template<typename T>
     void equation<T>::Parametri::askpar(){
        std::cout<<"Initialize the parameters a b and c"<<std::endl;
        std::cin>>a>>b>>c;
    };
    template<typename T>
          equation<T>::equation(){
        delta=0;
        fract=0;    
          
    };
    template<typename T>
void equation<T>::read(){
std::ifstream file("Parametri.txt");
file>>p.a>>p.b>>p.c;
file.close();    
};    
template<typename T>
 void equation<T>::write(){
     std::ofstream file;
 file.open("Soluzioni.txt",std::ios_base::app);
  file<<"The solutions with the parameters ("<<p.a<<","<<p.b<<","<<p.c<<") are: "<<std::endl;
    if (c1.immaginary==0){
          file<<"x1="<<c1.real<<std::endl;
          file<<"x2="<<c2.real<<std::endl;
          file.close();
    }
    else{
        
          file<<"x1=";
          file.close();
          c1.print();
          file.open("Soluzioni.txt",std::ios_base::app);
          file<<"x2=";
          file.close();
          c2.print();}
          
     
};
template<typename T>
void equation<T>::solve(){
        delta=pow(p.b,2.0)-4*p.a*p.c;
    fract=(2*p.a);
if (delta>0){
c1.real=(-p.b+sqrt(delta))/fract;                  //meglio mettere std::sqrt() in questo caso funziona ma non so di preciso che funzione stia chiamando    
c2.real=(-p.b-sqrt(delta))/fract;                  //è sempre meglio storare i valori che usi spesso in una variabile a livello   computazionale è più ottimizzato e veloce
}else if(delta==0){
    c1.real=-p.b/fract;
    c2.real=c1.real;
}else if(delta<0){
c1.real=-p.b/fract;
c1.immaginary=sqrt(-delta)/fract;
c2=c1;
c2.conjugate();
}else{std::cout<<"something went wrong"<<std::endl;}
};
template<typename T>
void equation<T>::solutions(){
    std::cout<<"The solutions are: "<<std::endl;
    if (c1.immaginary==0){
          std::cout<<"x1="<<c1.real<<std::endl;
          std::cout<<"x2="<<c2.real<<std::endl;
    }
    else{
          std::cout<<"x1=";c1.print();
          std::cout<<"x2=";c2.print();
}
};
//void solution(Parametri p);
#endif
