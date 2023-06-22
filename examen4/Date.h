#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <array>

class Date {


    public:

    Date(int=1,int=1,int=1900);
    void setDate(int,int,int);

    Date& operator++();
    Date operator++(int);
    Date& operator+=(int);

    static bool leapyear();
    bool endOfMonth(int) const;



    private:

        int day;
        int month;
        int year;

        static const std::array<int, 13> days;

        void  helpIncrement();







};




#endif