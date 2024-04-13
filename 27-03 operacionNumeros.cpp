//Leer tres numeros
//Si es 1: sumar el segundo y tercero
//Si es 2: multiplicar el segundo y tercero
//Si es 3: dividir el segundo y tercero
//Si es 4: raiz cuadrada de la suma del segundo y tercero
//Otro: devolver error

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
 int opcion;
 float num1, num2, resultado;
int main(){
    a:
    cout<<"\n Ingresar opcion: \n";
    cin>>opcion;
    cout<<"Ingresar primer numero: \n";
    cin>>num1;
    cout<<"Ingresar segundo numero: \n";
    cin>>num2;
    switch(opcion){
        case 1: 
        resultado= num1+num2;
        cout<<num1<<" + "<<num2<<" = "<<resultado<<"\n";
        break;
        case 2:
        resultado= num1*num2;
        cout<<num1<<" * "<<num2<<" = "<<resultado<<"\n";        
        break;
        case 3:
        resultado= num1/num2;
        cout<<num1<<" / "<<num2<<" = "<<resultado<<"\n";        
        break;
        case 4:
        resultado= sqrt(num1+num2);
        cout<<"Raiz cuadrada de "<<num1<<" + "<<num2<<" : "<<resultado<<"\n";        
        break;
        default: 
        cout<<"\n\t Error";
        break;}
    getche();
    return 0;
}
