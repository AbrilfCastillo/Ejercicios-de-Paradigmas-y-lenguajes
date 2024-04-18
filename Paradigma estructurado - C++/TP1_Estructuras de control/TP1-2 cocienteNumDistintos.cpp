//Leer dos números, calcular e imprimir el cociente entre el mayor y el menor, se supone que son distintos

#include <iostream>
#include <conio.h>

using namespace std;

int num1, num2;
float resultado;

int main(){
    a:;
    cout<<"\n Ingresar primer numero: \n";
    cin>>num1;
    cout<<"\n Ingresar segundo numero: \n";
    cin>>num2;    
    if(num1>num2){
        resultado= num1/num2;
        cout<<num1<<" / "<<num2<<" = "<<resultado<<"\n";
    }
    else if(num1<num2){
        resultado= num2/num1;
        cout<<num2<<" / "<<num1<<" = "<<resultado<<"\n";
    }
    else{
        cout<<"Error, ingresar numeros distintos \n";
        goto a;
    }
    getche();
    return 0;
}