//Cargar una serie de números enteros y encontrar el mayor de ellos

#include<iostream>
#include <conio.h>
using namespace std;

int x,mayor;

int main()
{
    do{
       cout << "Ingrese un numero: \n";
       cin>>x;
       if (x>mayor){
       mayor=x;
       }
    }
    while (x!=0);{
    cout << "\t El mayor es: "<<mayor;
    }
    return 0;
}