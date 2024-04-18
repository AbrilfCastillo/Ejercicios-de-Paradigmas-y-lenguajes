//Ingresar numero y determinar si está entre 1 y 17

#include <iostream>
#include <conio.h>
using namespace std;

int x;

int main(){
cout<<"Ingrese un numero: \n";
cin>>x;
if(x>=1 & x<=17){
    cout<<x<<" esta entre 1 y 17";
}
else{
    cout<<x<<" no esta entre 1 y 17";
}
getche();
return 0;
}