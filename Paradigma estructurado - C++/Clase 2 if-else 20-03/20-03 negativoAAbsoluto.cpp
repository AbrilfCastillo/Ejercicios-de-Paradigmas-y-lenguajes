//Pasar numero negativo a absoluto
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int x;

int main(){
cout<<"Ingrese un numero: \n";
cin>>x;
if(x<0){
    x=abs(x);
}
cout<<"Numero absoluto: "<<x<<endl;
getche();
return 0;
}
