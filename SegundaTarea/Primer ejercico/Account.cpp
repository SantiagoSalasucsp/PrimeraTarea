#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

int main(){


    Account Cuenta1("Satiago Salas Sotillo");

    cout<<"EL nombre de la cuenta es: "<<Cuenta1.getName()<<endl;

cout<<"Ingrese la cantidad de dinero que quiera: "<<endl;
int x;
cin>> x;
Cuenta1.ingresar(x);
cout<<"Ustede tiene: "<<Cuenta1.mostrar()<<endl;
Cuenta1.Retirar(55);
Cuenta1.ingresar(20);
cout<<"Usted tiene: "<<Cuenta1.mostrar()<<endl;





}