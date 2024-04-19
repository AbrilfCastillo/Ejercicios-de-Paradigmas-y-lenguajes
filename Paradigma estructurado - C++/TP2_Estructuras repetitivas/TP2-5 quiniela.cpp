//Para poder extraer alguna estadística, en una agencia de quiniela, 
//se requiere saber cuál fue el mayor valor registrado en los sorteos comprendidos en un periodo de tiempo determinado. 
//Terminar el proceso de carga de los números, cuando el valor leído sea mayor que mil.

#include <iostream>
#include <conio.h>

using namespace std;

int num, mayor;

int main(){
    cout<<"Ingrese valor: \n";
    cin>>num;
    while(num<=1000){
        if(num>mayor){
            mayor=num;
        }
    cout<<"\nIngrese valor: \n";
    cin>>num;
    }
    cout<<"El mayor valor registrado es: "<<mayor;
    getche();
    return 0;
}