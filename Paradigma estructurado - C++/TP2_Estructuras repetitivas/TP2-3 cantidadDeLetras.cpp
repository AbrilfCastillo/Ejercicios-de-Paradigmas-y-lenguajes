//leer una serie de letras, la carga termina en un punto. 
//informar cuantas letras se cargaron. 
//Utilizar únicamente las estructuras while y do while.

#include <iostream>
#include <conio.h>
#include <ctype.h>

using namespace std;

char letra;
int total;

int main(){
    do{
        inicio:;
        cout<<"\nIngresar una letra: \n";
        cin>>letra;
        if(letra != '.'){
            if(isalpha(letra)){
                total++;
            }
            else{
                cout<<"El valor ingresado no es una letra. Volver a intentar. \n";
                goto inicio;
            }
        }
    }
    while (letra != '.');
    cout<<"Se cargaron "<<total<<" letras \n";
    getche();
    return 0;
}