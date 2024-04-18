//Cargar numero y mostrar tabla de multiplicar

#include <iostream>
#include <conio.h>

using namespace std;

int num;

int main(){
    inicio:;
    cout<<"Ingrese valor a multiplicar:  \n";
    cin>>num;
    for (int i=0; i<=10; i++){
    cout<<num<<" * "<<i<<" = "<<num*i<<endl;}
    goto inicio;
    getche();
    return 0;
}