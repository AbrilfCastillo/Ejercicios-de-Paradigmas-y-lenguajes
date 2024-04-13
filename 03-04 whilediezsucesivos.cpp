//Cargar por teclado un número e imprimir por pantalla sus diez siguientes sucesivos

#include <iostream>
#include <conio.h>

using namespace std;

int dato, a=0;

int main(){
    inicio:;
    cout<<"Ingrese un numero: ";
    cin>>dato;
    while (a<10){
        dato++;
        cout<<dato<<"\n";
        a++;
    }
    reinicio()
    getche();
    return 0;
}