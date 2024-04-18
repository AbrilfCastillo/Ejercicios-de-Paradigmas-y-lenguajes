//Cargar una serie de numeros enteros, se pide encontrar el menor de ellos
//El proceso termina cuando el numero impreso sea mayor o igual a 10000

#include <iostream>
#include <conio.h>

using namespace std;

int num=0, menor=11000;

int main(){
    while (num<=10000){
        cout<<"Ingrese un numero: ";
        cin>>num;
        if (num<menor){
            menor=num;
        }
    }
    cout<<"El numero menor de la serie es "<<menor;
    getche();
    return 0;
}