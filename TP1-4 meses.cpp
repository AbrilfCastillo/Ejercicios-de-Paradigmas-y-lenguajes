//Leer un número comprendido entre 1 y 12 ambos inclusive, visualizar por pantalla el nombre del mes correspondiente.

#include <iostream>
#include <conio.h>

using namespace std;

int num;

int main(){
    inicio:
    cout<<"\n Ingresar numero entre 1 y 12: \n";
    cin>>num;
    switch(num){
        case 1:
            cout<<"Enero \n";
            break;
        case 2:
            cout<<"Febrero \n";
            break;            
        case 3:
            cout<<"Marzo \n";
            break;
        case 4:
            cout<<"Abril \n";
            break;
        case 5:
            cout<<"Mayo \n";
            break;
        case 6:
            cout<<"Junio \n";
            break;
        case 7:
            cout<<"Julio \n";
            break;
        case 8:
            cout<<"Agosto \n";
            break;
        case 9:
            cout<<"Septiembre \n";
            break;
        case 10:
            cout<<"Octubre \n";
            break;
        case 11:
            cout<<"Noviembre \n";
            break;
        case 12:
            cout<<"Diciembre \n";
            break;
        default:
        cout<<"Error, intente nuevamente \n";
        goto inicio;
    }
    getche();
    return 0;
}