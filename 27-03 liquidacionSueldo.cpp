//Cargar categoria y sueldo basico de cada empleado
//Calcular sueldo neto teniendo en cuenta lo siguiente:
//categoria: 1_280000 (aplicar 20% de descuento)
//           2_250000 (aplicar 15% de descuento)
//           3_200000(aplicar 0% de descuento)
//           4_150000(aplicar 5% de descuento)
//imprimir categoria, sueldo basico, descuento, sueldo neto

#include <iostream>
#include <conio.h>

using namespace std;
 int categoria;
 float sueldoBasico, descuento, sueldoNeto;
int main(){
    inicio:
    cout<<"\n Ingresar categoria: \n";
    cin>>categoria;
    cout<<"\n Ingresar sueldoBasico: \n";
    cin>>sueldoBasico;
    switch(categoria){
        case 1: 
        descuento=sueldoBasico*0.20;
        sueldoNeto = sueldoBasico - descuento;
        cout<<"\n Categoria uno \n";
        cout<<"Sueldo basico: "<<sueldoBasico<<"\n";
        cout<<"Descuento 20%: "<<descuento<<"\n";
        cout<<"Sueldo neto: "<<sueldoNeto;
        break;
        case 2:
        descuento=sueldoBasico*0.15;
        sueldoNeto = sueldoBasico - descuento;
        cout<<"Categoria dos \n";
        cout<<"Sueldo basico: "<<sueldoBasico<<"\n";
        cout<<"Descuento %15: "<<descuento<<"\n";
        cout<<"Sueldo neto: "<<sueldoNeto;
        break;
        case 3:
        descuento=sueldoBasico*0.10;
        sueldoNeto = sueldoBasico - descuento;
        cout<<"Categoria tres \n";
        cout<<"Sueldo basico: "<<sueldoBasico<<"\n";
        cout<<"Descuento %10: "<<descuento<<"\n";
        cout<<"Sueldo neto: "<<sueldoNeto;
        break;
        case 4:
        descuento=sueldoBasico*0.05;
        sueldoNeto = sueldoBasico - descuento;
        cout<<"Categoria cuatro \n";
        cout<<"Sueldo basico: "<<sueldoBasico<<"\n";
        cout<<"Descuento %5: "<<descuento<<"\n";
        cout<<"Sueldo neto: "<<sueldoNeto;
        break;
        default: 
        cout<<"Error, ingrese los datos nuevamente \n";
        goto inicio;}
    getche();
    return 0;
}