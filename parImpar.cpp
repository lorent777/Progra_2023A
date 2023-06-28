//algoritmo para par o impar
#include<iostream>
using namespace std;
 
int main(){
    int num=0;
    cout<<"Algoritmo para determinar par o impar \n";
    cout<<"Ingrese el numero: ";
    cin>>num;
    if ((num%2)==0){
        cout<<"El numero es par";
    }else{
        cout<<"El numero es impar";
    }
    return 0;
}