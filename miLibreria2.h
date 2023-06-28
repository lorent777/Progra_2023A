#ifndef _miLibreria
#define _miLibreria
int divRestas(int x, int y);
int multi(int a, int b);
int suma(int a, int b);

int divRestas(int x, int y){
    if(y>x){
        return 0;
    }else{
        return divRestas(x-y,y)+1;
    }
}
int multi(int a, int b){
    return a*b;
}
int suma(int a, int b){
    return a+b;
}
#endif