#include <iostream>
#include <string>

class boleta{

    public:
        boleta(std::string Num, std::string Des, int cap, int Preci){
            NumPiezas=Num;
            Descrip=Des;
            cantidad=cap;
            PrecioporUNI=Preci;
            
            
        }

        void setNumePiezas(std::string Num){
            NumPiezas=Num;
        }
        std::string getNumPiezas(){
            return NumPiezas;
        }



        void setDescrip(std::string des){
            Descrip=des;
        }
        std::string getDescrip(){
            return Descrip;
        }


        void setcantidad(int Can){
            cantidad=Can;
        }
        int getcantidad(){
            return cantidad;
        }


        void setPrecioporUNI(int UNI){
            PrecioporUNI=UNI;
        }
        int getPrecioporUNI(){
            return PrecioporUNI;
        }

        std::string print(){

            std::cout<<"Uested se esta llevando: "<<NumPiezas<<std::endl;
            std::cout<<"La descripcion del producto: "<<Descrip<<std::endl;
            std::cout<<"Usted se esta llevando: "<<cantidad<<std::endl;
            std::cout<<"los impuestos que se les esta combrando, son: "<<((cantidad*PrecioporUNI)/100)*Impuestos<<std::endl;
            std::cout<<"mis ganacias: "<<(cantidad*PrecioporUNI)-(((cantidad*PrecioporUNI)/100)*Impuestos)<<std::endl;
        }









    private:
        std::string NumPiezas;
        std::string Descrip;
        int cantidad;
        int PrecioporUNI=20;
        double Impuestos=0.8;
        double tasa;





};