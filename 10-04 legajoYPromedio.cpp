//En un instituto de enseñanza se quiere emitir un listado de todos aquellos alumnos cuyo promedio general sea superior a 7
//Se ingresa como dato el numero de legajo y los promedios de las cuatro materias que se dictan
//Verificar que cada promedio sea mayor o igual que cero o menor o igual que diez
//Si no se cumple esta condición ignorar el valor y pedirlo nuevamente
//Terminar el proceso cuando se lea un numero de legajo igual a cero

#include <iostream>
#include <conio.h>

using namespace std;

int legajo, x;
float nota,suma,promedio;

int main(){
    inicio:;
    do{
        x=1;
        cout<<"Ingresar numero de legajo: \n";
        cin>>legajo;
        while(x<=4){
            x++;
            cout<<"Ingresar nota: ";
            cin>>nota;
            if (nota>=0 && nota<=10){
                suma += nota;
                }
            else{
                cout<<"Error, intente nuevamente \n";
                goto inicio;
                }
            }
        promedio=suma/4;
        }

    while(legajo!=0);{
        if (promedio>=7){
        cout<<"Legajo: "<<legajo<<"\n Promedio: "<<promedio;
    }}
    getche();
    return 0;
}