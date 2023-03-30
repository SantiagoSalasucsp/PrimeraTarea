#include <string>
#include <iostream>
using namespace std;

class Account {

    public:
           

        explicit Account(string nam){ //constructor 
            name=nam;
        }

        void ingresar(int num){
            Dinero=Dinero+num;
        }


        string Retirar(int monto){
            if (Dinero<monto)
                cout<<"El monto del retiro excedio el saldo de la cuenta"<<endl;
                
            
            else{
                Dinero=Dinero-monto;
                cout<<"Retiro con exito"<<endl;}
        }
                
                
            
        



        int mostrar(){
            return Dinero;
        }
        void setName(string nom){
            name=nom;
        }
        string getName(){
            return name;
        }

        void resta(int num, int num2){
            num = num-num2;
        }
        
 


    private:
    int Dinero=0;
    string name;



};