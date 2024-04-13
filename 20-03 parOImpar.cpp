//Cargar un numero y determinar si es par o impar

#include <iostream>
#include <conio.h>

using namespace std;

int num, resto;

int main(){
    cout<<"Ingresar numero: \n";
    cin>>num;
    resto=num%2;
    if (resto==0){
       cout<<num<<" es par";
       }
    else{
         cout<<num<<" es impar";
         }
    getche();
    return 0;
    }
