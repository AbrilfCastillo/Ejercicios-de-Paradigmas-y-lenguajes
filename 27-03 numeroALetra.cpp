//Cargar un numero por teclado entre 1 y 3, responder el respectivo numero en letra
#include <iostream>
#include <conio.h>

using namespace std;
 int num;
int main(){
    cout<<"Ingresar numero entre 1 y 3: \n";
    cin>>num;
    switch(num){
        case 1: cout<<"\n\t uno";
        break;
        case 2: cout<<"\n\t dos";
        break;
        case 3: cout<<"\n\t tres";
        break;
        default: cout<<"\n\t Error";
        break;}
    getche();
    return 0;
}