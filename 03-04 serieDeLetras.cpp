//Ingresar una serie de letras, se pide encontrar la mayor de ellas
//el proceso se termina cuando ingresamos un punto

#include <iostream>
#include <conio.h>
#include <ctype.h>
using namespace std;

char letra, mayor='a';

int main(){
        cout<<"Ingrese una letra: ";
        cin>>letra;
        while (letra != '.'){
            if(isalpha(letra)){
               if (letra>mayor){
                    mayor=letra;
                    }
            }
            else{
                cout<<"El valor ingresado no es una letra";
            }
            
            cout<<"Ingrese una letra: ";
            cin>>letra;
        }
        cout<<"La letra mayor de la serie es "<<mayor;
    getche();
    return 0;
}