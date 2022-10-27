#include<iostream>
#include<cmath>



struct Complex{
double real;
double immaginary;
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

void solution(Parametri p){
    Complex c; 
    double delta;
    double fract;
    double x1;
    double x2;
    delta=pow(p.b,2.0)-4*p.a*p.c;
    fract=(2*p.a);
if (delta>0){
x1=(-p.b+sqrt(delta))/fract;                  //meglio mettere std::sqrt() in questo caso funziona ma non so di preciso che funzione stia chiamando    
x2=(-p.b-sqrt(delta))/fract;                  //è sempre meglio storare i valori che usi spesso in una variabile a livello   computazionale è più ottimizzato e veloce
std::cout<<"The solutions are x_1="<<x1<<" "<<"and x_2="<<x2<<std::endl;
}else if(delta==0){
x1=-p.b/fract;
std::cout<<"The solution is x="<<x1<<std::endl;
}else if(delta<0){
c.real=-p.b/fract;
c.immaginary=sqrt(-delta)/fract;
std::cout<<"The solutions are x_1="<<c.real<<"+i"<<c.immaginary<<" and x_2="<<c.real<<"-i"<<c.immaginary<<std::endl;
}else{std::cout<<"something went wrong"<<std::endl;}
}

int main(){
    Parametri par;
    par.getpar();
    par.askpar();
    par.getpar();
    solution(par);
    return 0;
}


