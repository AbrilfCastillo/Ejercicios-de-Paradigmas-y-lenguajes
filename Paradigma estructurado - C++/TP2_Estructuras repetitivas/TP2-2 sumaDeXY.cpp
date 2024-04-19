//Se dispone de una serie de 15 pares ordenados (x,y) de números enteros, 
//a los cuales se les debe calcular la suma de todas las X y la suma de todas las Y. 
//imprimir los resultados. 


#include <iostream>
#include <conio.h>

using namespace std;

int x, y, sumaX, sumaY;

int main(){
    for(int i=1;i<=15;i++){
    cout<<"\nPar ordenado "<<i<<endl;
    cout<<"Ingresar valor de X: \n";
    cin>>x;
    cout<<"\nIngresar valor de Y: \n";
    cin>>y;
    sumaX+=x;
    sumaY+=y;    
    }
    cout<<"Suma de todas las X: "<<sumaX<<endl;
    cout<<"Suma de todas las Y: "<<sumaY<<endl;
    getche();
    return 0;
    }