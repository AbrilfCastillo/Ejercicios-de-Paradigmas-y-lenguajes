//Leer un número e indicar si este es múltiplo de dos

#include <iostream>
#include <conio.h>

using namespace std;

int num, resto;

int main(){
    cout<<"\n Ingresar numero: \n";
    cin>>num;
    resto= num % 2;
    if(resto==0){
        cout<<"Es multiplo de dos";
    }
    else{
        cout<<"No es multiplo de dos";
    }
    getche();
    return 0;
}