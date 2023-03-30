#include <iostream>
#include <string>

class Fecha{

    public:


     int array[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        Fecha(int di, int me, int yea){
           
            //año
            if(yea%4==0 &&yea%100!=0 || yea%400==0){
                array[2]+=1;
                year=yea;
            }
            year=yea;



            //mes
            if (me>12||me<=0)
                mes=1;
            else
                mes=me;


            //día
            if( di>array[me]||di<=0)
                dia=1;
            else
                dia= di;
        }

        void setdia(int di){
            dia=di;
        }
        int getdia(){
            return dia;
        }

        void setmes(int me){
            if(me>12||me<=0)
                mes=1;
            else 
                mes=me;
        }
        int getmes(){
            return mes;
        }

        void setyear(int yea){
            year=yea;
        }
        int getyear(){
            return year;
        }


        std::string fecha(){
            std::cout<<dia<<"/"<<mes<<"/"<<year<<std::endl;
            
        }
    




    private:
        int dia=1;
        int mes=1;
        int year=1;



};