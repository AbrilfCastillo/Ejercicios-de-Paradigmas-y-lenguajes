//Leer una serie de pares ordenados imprimir el par cuya suma sea mayor
//El proceso termina cuando los pares sean igual a 0
 
#include <iostream>
#include <conio.h>

using namespace std;


int x, y, suma, mayor;

int main(){
do{
    cout<<"Ingresar x: \n";
    cin>>x;
    cout<<"Ingresar y: \n";
    cin>>y;
    suma=x+y;
    if (suma>mayor){
      mayor=suma;
    }
}
while(x!=0 || y!=0);{
    cout<<"El mayor es: "<<mayor<<"\n";
}
getche();
return 0;
}