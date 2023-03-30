#include <iostream>
#include <string>
#include "MotorVehicle.h"
using namespace std;

int main(){

    MotorVehicle Carro1("nisan", "gulf", "rojo");
    int x;
    cout<<"ingrese la fecha de fabricaion: "<<endl;
    cin>>x;
    Carro1.setyear(x);
    cout<<"Ingrese la capacidad del motor: "<<endl;
    Carro1.setCapasidadDelMotor(x);



    cout<<"El color de tu carro es "<<Carro1.getcolor()<<endl;

    Carro1.Perfil();





}