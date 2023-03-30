#include <iostream>
using namespace std;

int main() {
int x;
int y;
int k;
int l;
int p;
cout<<"Ingrese 4 digitos: "<<endl;
cin>>x;

y=x%10;
k=(x%100-y)/10;
l=(x%1000-(10*k)+y)/100;
p=(x%10000-(100*l)+(10*k)+y)/1000;


cout<<y<<endl;
cout<<k<<endl;
cout<<l<<endl;
cout<<p<<endl;


  
  }
