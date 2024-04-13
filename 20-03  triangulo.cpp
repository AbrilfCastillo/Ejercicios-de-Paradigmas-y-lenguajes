//Dado los tres lados de un triangulo, informar si se trata de un triangulo isoceles, equilatero o escaleno
 #include <iostream>
 #include <conio.h>
 
 using namespace std;

int a,b,c;
int main(){
    cout<<"Ingresar lado 'a': \n";
    cin>>a;
    cout<<"Ingresar lado 'b': \n";
    cin>>b;
    cout<<"Ingresar lado 'c': \n";
    cin>>c;
    if (a==b & b==c){
        cout<<"Triangulo equilatero \n";
    }
    else if (a==b || a==c || b==c){
        cout<<"Triangulo isoceles \n";
    }
    else {
        cout<<"Triangulo escaleno \n";
    }
    getche();
    return 0;
}
