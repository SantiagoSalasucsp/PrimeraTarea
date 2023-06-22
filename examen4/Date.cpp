#include <iostream>
#include "Date.h"
#include <string>
#include <array>

using namespace std;


const array<int,13> Date::days{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


Date::Date (int d, int m, int y){

    setDate(d,m,y);

}

void Date::setDate(int d,int m,int y){

    if(m>=1 && m<=12){
        month=m;
    }
    else {
        throw invalid_argument{"Esta fuera del rango el mes"};
    }

    if(y>=1900 && y<=2100){
        year=y;
    }
    else {
        throw invalid_argument{"El año esa afuera del rango"};
    }
    
    

    if((m == 2 && leapyear(year) && d >= 1 && d <= 29) ||(d >= 1 && d <= days[m])) {
        day = d;
    }
    else {
        throw invalid_argument{"El dia esta fuera del rango"};
    }

}


bool leapyear(int prueba){
    (prueba % 400 == 0 ||(prueba % 100 != 0 && prueba % 4 == 0)); 
}


bool Date::endOfMonth(int testDay) const {
    if (month == 2 && leapyear(year)) {
        return testDay == 29; 
    }
    else {
        return testDay == days[month];
    }
} 

void Date::helpIncrement() {

    if (!endOfMonth(day)) {
        ++day; 
    }
    else {
        if (month < 12) { 
        ++month; 
        day = 1;
        }

        else {
            ++year;
            month = 1;
            day = 1; 
        }
    }
}



//Sobreacrga de operadores


Date& Date::operator++(){
    helpIncrement();
    return *this;
}

Date Date::operator++ (int){
    Date temp=*this;
    helpIncrement();
    return temp;

}

Date& Date::operator+=(int additionalDays) {
 for (unsigned int i = 0; i < additionalDays; ++i) {
 helpIncrement();
 }

 return *this; 
} 