//Ingresar 10 letras, buscar alfabeticamente la mayor
#include <iostream>
#include <conio.h>
#include <ctype.h>

using namespace std;

char letra, mayor;

int main(){
    inicio:;
    for(int i=1; i<=10; i++){
        cout<<"\n Ingrese una letra: \n";
        cin>>letra;
        if (isalpha){
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
