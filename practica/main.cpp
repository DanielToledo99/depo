#include <iostream>

using namespace std;
int func1(){
    int millas;
    cout << "Ingresa la cantidad de millas: " ;
    cin >> millas;
    float res;
    res = millas * (1.60934);
    cout << "La cantidad en Kilometros es: " << res << endl;
    return res;
}
int func2(){
    int fah = 20;
    float celsius;
    for(int i=0;i<16;i++){
        float x;
        x = fah*i;
        celsius = (5*(x-32)/9);
        cout << "Fahrenheit " << x << " -> " << "Celsius " << celsius << endl;
    }
    return 0;
}
int func3(){
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    while(numero != -1){
        if((numero%2)== 0){
            cout << "El numero es par: " << endl;
        }
        else
            cout << "El numero es impar " << endl;
        break;
    }
    return 0;
}
int func4(int base, int expo){
    int res = base;
    for(int i = 1; expo > i ; expo -- ){
        res = res * base;
    }
    cout << res << endl;
}
int func5(){
    int numero;
    cout << "Ingresa un numero: ";
    cin >> numero;

    switch (numero) {
        case 0:
            cout << "cero" << endl;
            break;
        case 1:
            cout << "uno" << endl;
            break;
        case 2:
            cout << "dos" << endl;
            break;
        case 3:
            cout << "tres" << endl;
            break;
        case 4:
            cout << "cuatro" << endl;
            break;
        case 5:
            cout << "cinco" << endl;
            break;
        case 6:
            cout << "seis" << endl;
            break;
        case 7:
            cout << "siete" << endl;
            break;
        case 8:
            cout << "ocho" << endl;
            break;
        case 9:
            cout << "nueve" << endl;
            break;
        default:
            cout << "El numero esta fuera de rango" << endl;
    }
    return 0;
}
void func7(int &x,int &y){
    x^=y;
    y^=x;
    x^=y;
}
void func8(int *a, int *b){
    *a ^= *b;
    *b ^= *a;
    *a ^= *b;
}
int main()
{
    func1();
    func2();
    func3();
    func4(2,2);
    func5();

}
