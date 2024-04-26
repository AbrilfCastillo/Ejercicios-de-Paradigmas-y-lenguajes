//Ingresar una serie de números enteros positivos.
//Mostrar el menor numero par y el mayor numero impar.
//Se leen 100 numeros.

#include <iostream>
#include <conio.h>

using namespace std;
//Asigno a la variable "menor" el mayor valor que puede tener un entero (INT_MAX)
int num, resto, mayor, menor=INT_MAX;

int main(){
    for(int i=1; i<=10;i++){
        inicio:;    
        cout<<"Ingresar numero: \n";
        cin>>num;
        resto=num%2;
        if (num>=0){
            if(resto==0){
                if (menor>num){
                    menor=num;
                }
            }
            else{
                if(num>mayor){
                    mayor=num;
                }
            }
        }
        else{
            cout<<"Error, ingrese un numero positivo \n";
            goto inicio;
        }
        
    }
    cout<<"Menor de numeros pares: "<<menor<<endl;
    cout<<"Mayor de numeros impares: "<<mayor<<endl;
    getche();
    return 0;
}