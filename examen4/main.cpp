#include <iostream>
#include "Date.h"
#include <string>
#include <vector>



int main(){
    Date d1{12, 27, 2010};
    Date d2;


    cout << "d1 es: " << d1 <<endl<<"d2 es " << d2;

    d2.setDate(2, 28, 2008);

    Date d3{7, 13, 2010};
    cout << "++d3 es: " << ++d3 << endl;






}