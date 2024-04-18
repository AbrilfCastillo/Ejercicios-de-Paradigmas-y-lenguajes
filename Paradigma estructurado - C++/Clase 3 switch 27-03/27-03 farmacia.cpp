//En una farmacia se vende un producto en tres tamaños(1:grande, 2:mediano,3:chico)
//Ingresando el codigo del producto debera producir la salida correcta
//En caso contrario deberia pedirme el codigo de producto hasta que sea correcto

#include <iostream>
#include <conio.h>

using namespace std;
 int codigo;
int main(){
    a:
    cout<<"\n Ingresar codigo de producto: \n";
    cin>>codigo;
    switch(codigo){
        case 1: cout<<"\n\t grande";
        break;
        case 2: cout<<"\n\t mediano";
        break;
        case 3: cout<<"\n\t chico";
        break;
        default: cout<<"Error, ingrese el codigo nuevamente \n";
        goto a;}
    getche();
    return 0;
}