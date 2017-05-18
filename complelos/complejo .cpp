#include "complejo .h"


complejo::void ingresaC(complejo &A,char c[]){
    cout << c << endl;
    cout << "Parte real: ";
    cin >> A.real;
    cout << "Parte imaginaria: ";
    cin >> A.imag;

}
complejo::sumaC(double complejo1, double complejo2){
    complejo C;
    F.real = complejo1.real + complejo2.real;
    F.imag = complejo1.imag + complejo2.imag;
    return C ;
}
complejo::restaC(double complejo1, double complejo2){
    complejo D;
    F.real = complejo1.real - complejo2.real;
    F.imag = complejo1.imag - complejo2.imag;
    return D ;
}
complejo::multiC(double complejo1,double complejo2){
    complejo E;
    E.real = (complejo1.real*complejo2.real)-(complejo1.imag*complejo2.imag);
    E.imag= (complejo1.real*complejo2.real)+(complejo1.imag*complejo2.imag)

}
complejo::diviC(double complejo1, double complejo2){
    complejo F;
    F.real = (complejo1.real*complejo2.real)+(complejo1.imag*complejo2.imag)/ (complejo1.imag * complejo1.imag) + (complejo2.imag * complejo2.imag);
    F.imag = (complejo1.imag*complejo2.real)-(complejo1.real*complejo2.imag)/(complejo1.imag * complejo1.imag) + (complejo2.imag * complejo2.imag);
    return F
}
