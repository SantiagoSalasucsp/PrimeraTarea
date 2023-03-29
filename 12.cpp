#include <iostream>
using namespace std;
int main() {
int g;
int p;
int f;
int x;
int h;
int l;

cout<<"Ingrese lo recorrido:";
cin>>g;

cout<<"Ingrese el costo del galon:";
cin>>p;

cout<<"Ingrese cuatos galones gasta por milla: ";
cin>>f;

cout<<"Ingrese su tarifa por estacionamiento";
cin>>h;

cout<<"Ingrese cuantas personas entran por dia";
cin>>x;

l=((g/f)*p)+h+x;


cout<<"este seria el precio que ahorrarias:"<<l;

  
  }
