//Leer una serie de  125 números enteros
//imprimir por pantalla cuantos son mayores que 70, cuántos son menores que 43 y cuántos son iguales a 50. 
//También imprimir al lado de cada número la palabra par o impar dependiendo de lo que sea el mismo.

#include <iostream>
#include <conio.h>

using namespace std;

int num, menor43, igual50, mayor70, resto;

int main(){
    for(int i=0;i<=5;i++)
    {
        cout<<"\nIngrese un numero: \n";
        cin>>num;
        resto=num%2;
        if (resto==0){
            cout<<"par\n";
        }
        else{
            cout<<"impar\n";
        }
        if (num>=43){
            if(num==50){
                igual50++;
            }
            else if(num>70){
                mayor70++;
            }
        }
        else{
            menor43++;
        }
    }
    cout<<"Numeros menores a 43: "<<menor43<<endl;
    cout<<"Numeros iguales a 50: "<<igual50<<endl;
    cout<<"Numeros mayores a 70: "<<mayor70<<endl;    
    getche();
    return 0;
}