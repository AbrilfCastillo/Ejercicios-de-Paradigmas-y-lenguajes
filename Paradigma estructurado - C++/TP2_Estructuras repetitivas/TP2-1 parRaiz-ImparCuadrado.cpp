//Leer por teclado una serie de valores
//imprimiendo para cada valor su raíz cuadrada si es par y su cuadrado si es impar. 
//Ultimo valor, cero (no debe ser procesado).

#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int num, resto, potencia;
float raiz;

int main(){
    cout<<"\nIngresar valor: \n";
    cin>>num;
    while(num!=0){
    resto=num%2;
    if (resto==0){
        if (num>0){
            raiz=sqrt(num);
            cout<<"Raiz de "<<num<<" = "<<raiz<<endl;
        }
        else{
            cout<<"Raiz de "<<num<<" = "<<"no existe\n";
        }
    }
    else{
        potencia=pow(num,2);
        cout<<"Cuadrado de "<<num<<" = "<<potencia<<endl;
    }
    cout<<"\nIngresar valor: \n";
    cin>>num;
    }
    cout<<"\nFin";
    getche();
    return 0;
    }