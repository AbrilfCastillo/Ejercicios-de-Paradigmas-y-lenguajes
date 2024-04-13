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
        suma=0;
        cout<<"\nIngresar numero de legajo: \n";
        cin>>legajo;
        if (legajo==0){
            cout<<"\nFin\n";
            break;
        }
        while(x<=4){
        cout<<"\nIngresar nota: \n";
            cin>>nota;
            if (nota>=0 && nota<=10){
                suma += nota;
                x++;
                }
            else{
                cout<<"\nError, intente nuevamente\n";
                goto inicio;
                }
            }
        promedio=suma/4;
        if (promedio>=7){
        cout<<"\nLegajo: "<<legajo<<"\nPromedio: "<<promedio<<endl;}
        }

    while(legajo!=0);
    getche();
    return 0;
}