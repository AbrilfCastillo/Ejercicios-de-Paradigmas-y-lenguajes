//Se dispone de  cincuenta pares ordenados (X,Y) de numeros
//a los cuales se debe calcular la suma de todas las X y la suma de todas las Y, imprimir los resultados

#include <iostream>
#include <conio.h>

using namespace std;

int valorX, valorY, sumaX, sumaY;

int main(){
    inicio:;
    for(int i=1; i<=50; i++){
        cout<<"Ingrese el valor de X: \n";
        cin>>valorX;
        cout<<"Ingrese el valor de Y: \n";
        cin>>valorY;
        sumaX+=valorX;
        sumaY+=valorY;
    }
    cout<<"Suma de todas las X: "<<sumaX<<endl;
    cout<<"Suma de todas las Y: "<<sumaY<<endl;
    goto inicio;
    getche();
    return 0;
}