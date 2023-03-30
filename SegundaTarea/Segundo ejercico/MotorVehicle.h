#include <iostream>
#include <string>


class MotorVehicle{

    public:

        MotorVehicle(std::string mar, std::string comb, std::string colo){
            marca=mar;
            combustible=comb;
            color=colo;
        }

        void setmarca(std::string mar){
            marca=mar;
        }
        std::string getmarca(){
            return marca;
        }


        void setcombustible(std::string comb){
            combustible=comb;
        }
        std::string getcombustible(){
            return combustible;
        }


        void setcolor(std::string colo){
            color=colo;
        }
        std::string getcolor(){
            return color;
        }

        void setyear(int num){
            year=num;
        }
        int getyear(){
            return year;
        }

        void setCapasidadDelMotor(int num){
            CapasidadDelMotor=num;
        }
        int getCapasidadDelMotor(){
            return CapasidadDelMotor;
        }


    std::string Perfil(){
        std::cout<<"Marca: "<<marca<<std::endl;
        std::cout<<"Combustible: "<<combustible<<std::endl;
        std::cout<<"Color: "<<color<<std::endl;
        std::cout<<"Fecha de fabricacion: "<<year<<std::endl;
        std::cout<<"Capacidad del motor: "<<CapasidadDelMotor<<std::endl;
    }

    private:
        std::string marca;
        std::string combustible;
        std::string color;
        int year;
        int CapasidadDelMotor;


};