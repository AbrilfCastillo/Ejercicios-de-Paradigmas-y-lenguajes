//Ingresar por teclado de a uno una serie de numeros
//encontrar e imprimir el menor de los numeros pares
//la cantidad de elementos leidos es 100

#include <iostream>
#include <conio.h>

using namespace std;

int num, menor=65000, resto;

int main(){
    inicio:;
    for(int i=1; i<=5; i++){
        cout<<"Ingrese un numero: \n";
        cin>>num;
        resto=num%2;
        if (resto==0 && num<menor){
            menor=num;
        }
    }
    cout<<"Numero par mas chico: "<<menor<<endl;
    goto inicio;
    getche();
    return 0;
}