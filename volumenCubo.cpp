//algoritmo para calcular el volumen de un cubo
#include<iostream>
using namespace std;
 
int main(){
    float a=0,b=0,c=0,v=0;
    cout<<"Algoritmo para calcular el volumen de un cubo\n";
    cout<<"Ingrese el ancho: ";
    cin>>a;
    cout<<"Ingrese la altura: ";
    cin>>b;
    cout<<"Ingrese la profundidad: ";
    cin>>c;
    v=a*b*c;
    cout<<"El volumen es: " << v;
    return 0;
}