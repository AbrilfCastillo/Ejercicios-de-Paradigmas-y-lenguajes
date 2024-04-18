//Leer una serie de pares ordenados indicando
//Cuantos contienen múltiplos de dos en sus primeras componentes y de cinco en las segundas componentes
//terminar el proceso cuando las componentes x e y de algún par sean múltiplos de tres

#include <iostream>
#include <conio.h>

using namespace std;


int x, y, multiplosDosYCinco;

int main() {
    do {
        cout<<"Ingresar x: \n";
        cin>>x;
        cout<<"Ingresar y: \n";
        cin>>y;
        if (x%2==0 && y%5==0) {
            multiplosDosYCinco+=1;
        }
    }
    while(x%3!=0 && y%3!=0);
    {
        cout<<"Pares con multiplo de 2 y 5: "<<multiplosDosYCinco<<"\n";
        getche();
        return 0;
    }
}