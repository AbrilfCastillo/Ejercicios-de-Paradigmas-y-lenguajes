//Leer tres numeros e indicar si son distintos 
 #include <iostream>
 #include <conio.h>
 using namespace std;

int num1,num2,num3;
int main(){
    cout<<"Ingresar primer valor: \n";
    cin>>num1;
    cout<<"Ingresar segundo valor: \n";
    cin>>num2;
    cout<<"Ingresar tercer valor: \n";
    cin>>num3;
    if (num1!=num2 & num1!=num3 & num2!=num3){
        cout<<"Son distintos \n";
    }
    else if(num1==num2 & num2==num3){
        cout<<"Son iguales \n";
    }
    else {
        cout<<"Algunos son iguales \n";
    }
    getche();
    return 0;
}