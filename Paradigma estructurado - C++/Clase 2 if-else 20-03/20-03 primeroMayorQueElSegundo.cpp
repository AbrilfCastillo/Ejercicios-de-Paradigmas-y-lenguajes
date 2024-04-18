//Cargar dos números, si el primero es mayor que el segundo lo restamos

#include <iostream>
#include <conio.h>
using namespace std;

int num1,num2,resultado;

int main(){
cout<<"Ingrese primer numero: \n";
cin>>num1;
cout<<"Ingrese segundo numero: \n";
cin>>num2;
    if(num1>num2){
        resultado=num1-num2;
        cout<<num1<<" - "<<num2<<" = "<<resultado;
    }
    else if(num1<num2){
        resultado=num1+num2;
        cout<<num1<<" + "<<num2<<" = "<<resultado;
    }
    else{
        cout<<num1<<" = "<<num2;
    }
    getche();
    return 0;
}
