//Leer una serie de 12 numeros enteros, informar mediante un mensaje cuantos son mayores que 100

#include <iostream>
#include <conio.h>

using namespace std;

int num, contador=0;

int main(){
    for (int i=1; i<=12; i++){
        cout<<"Ingresar valor "<<i<<": \n";
        cin>>num;
        if (num>100){
            contador++;
    }
    }
    cout<<"Los numeros mayores a 100 son: "<<contador<<endl;
    getche();
    return 0;
}

