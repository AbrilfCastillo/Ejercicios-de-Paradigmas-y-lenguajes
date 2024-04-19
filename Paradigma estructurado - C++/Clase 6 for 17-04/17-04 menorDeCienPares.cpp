//Ingresar por teclado de a uno una serie de numeros
//encontrar e imprimir el menor de los numeros PARES
//la cantidad de elementos leidos es 100

#include <iostream>
#include <conio.h>

using namespace std;

//Defino la variable "menor" con el valor maximo
int num, menor=INT_MAX, resto;

int main(){
    for(int i=1; i<=100; i++){
        cout<<"Ingrese un numero: \n";
        cin>>num;
        resto=num%2;
        if (resto==0 && num<menor){
            menor=num;
        }
    }
    cout<<"Numero par mas chico: "<<menor<<endl;
    getche();
    return 0;
}