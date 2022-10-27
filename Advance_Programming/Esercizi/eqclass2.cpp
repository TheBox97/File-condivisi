#include<iostream>
#include<cmath>




class equation{
    struct Complex{
double real;
double immaginary;
    Complex(){
        real=0;
        immaginary=0;
    }
    void print(){
          std::cout<<real<<"+i("<<immaginary<<")"<<std::endl;
    }
    void conjugate(){
        immaginary=-immaginary;
    }
};

class Parametri{
public:
    double a;
    double b;
    double c;

    Parametri(){
        a=0;
        b=0;
        c=0;
    }
    void getpar(){
        std::cout<<"The parameters are:"<<std::endl;
        std::cout<<a<<" "<<b<<" "<<c<<std::endl;
    }
    void askpar(){
        std::cout<<"Initialize the parameters a b and c"<<std::endl;
        std::cin>>a>>b>>c;
    }
};
    double delta,fract;
public:
     Parametri p; 
    Complex c1,c2;
      equation(){
        delta=0;
        fract=0;    
          
    }   
    
    void solve(){
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
}
void solutions(){
    std::cout<<"The solutions are: "<<std::endl;
    if (c1.immaginary==0){
          std::cout<<"x1="<<c1.real<<std::endl;
          std::cout<<"x2="<<c2.real<<std::endl;
    }
    else{
          std::cout<<"x1=";c1.print();
          std::cout<<"x2=";c2.print();
}
}
};


int main(){
    equation E;
    E.p.getpar();
    E.p.askpar();
    E.p.getpar();
    E.solve();
    E.solutions();
    return 0;
}
