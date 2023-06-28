//algoritmo para suma de dos numeros
#include<iostream>
using namespace std;
 
int main(){
    float num1=0, num2=0, resultado=0;
    cout<<"Algoritmo para sumar dos numeros\n";
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    resultado=num1+num2;
    cout<<"La suma es: " <<resultado;
    return 0;
}