//Ingresar 10 letras, buscar alfabeticamente la mayor
#include <iostream>
#include <conio.h>
#include <ctype.h>

using namespace std;

char letra, mayor;

int main(){
    for(int i=1; i<=10; i++){
        inicio:;
        cout<<endl<<i<<" Ingrese una letra: \n";
        cin>>letra;
        if (isalpha(letra)){
            if (letra>mayor){
                mayor=letra;
            }
        }
        else{
            cout<<"\nEl valor ingresado no es valido. Intente nuevamente \n";
            goto inicio;
        }
    }
    cout<<"\n La letra mayor es: "<<mayor<<endl;
    getche();
    return 0;
}
