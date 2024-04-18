//Leer dos numeros e indicar mediante un mensaje si la suma es mayor que 730
 #include <iostream>
 #include <conio.h>
 using namespace std;

int num1,num2,sum;
int main(){
    cout<<"Ingresar primer valor: \n";
    cin>>num1;
    cout<<"Ingresar segundo valor: \n";
    cin>>num2;
    sum=num1+num2;
    if (sum>730){
        cout<<"Mayor que 730 \n";
    }
    else {
        cout<<"Menor que 730";
    }
    getche();
    return 0;
}
