//Leer un número comprendido entre 1 y 7 ambos inclusive, se pide visualizar por pantalla el nombre del día de la semana correspondiente.

#include <iostream>
#include <conio.h>

using namespace std;

int num;

int main(){
    inicio:
    cout<<"\n Ingresar numero entre 1 y 7: \n";
    cin>>num;
    switch(num){
        case 1:
            cout<<"Lunes \n";
            break;
        case 2:
            cout<<"Martes \n";
            break;            
        case 3:
            cout<<"Miercoles \n";
            break;
        case 4:
            cout<<"Jueves \n";
            break;
        case 5:
            cout<<"Viernes \n";
            break;
        case 6:
            cout<<"Sabado \n";
            break;
        case 7:
            cout<<"Domingo \n";
            break;
        default:
        cout<<"Error, intente nuevamente \n";
        goto inicio;
    }
    getche();
    return 0;
}