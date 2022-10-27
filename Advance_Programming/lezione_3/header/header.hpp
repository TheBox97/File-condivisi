#ifndef HEADER
#define HEADER

class equation {
    struct Complex{
        double real;
double immaginary;
    Complex();
    void print();
    void conjugate();
    };
    class Parametri{
        public:
    double a;
    double b;
    double c;

    Parametri();
    void getpar();
    void askpar();
    };
    double delta,fract;
public:
         Parametri p; 
        Complex c1,c2;
        equation();
        void solve();
        void solutions();
        void write();
        void read();
};

//void solution(Parametri p);
#endif
