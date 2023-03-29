#include <iostream>
using namespace std;
int main() {
int g;
int w;
int numero1;
int numero2;

cout<<"ingrese el numero1:"<<endl;
cin>>numero1;
cout<<"ingrese el numero2:"<<endl;
cin>>numero2;

g=numero1+numero2;
w=numero1-numero2;
if(numero1%2==0)
  {cout<<"El numero1 es par"<<endl;}
else
{cout<<"El numero1 es impar"<<endl;}

if(numero2%2==0)
  {cout<<"El numero2 es par"<<endl;}
else
{cout<<"El numero2 es impar"<<endl;}


cout<<"la suma es:"<<g<<endl;

if (g%2==0)
{cout<<"la suma es par"<<endl;}
else 
{cout<<"la suma es impar"<<endl;}

cout<<"la resta es:"<<w<<endl;

  if (w%2==0)
  {cout<<"la resta es par"<<endl;}
  else 
  {cout<<"la resta es impar"<<endl;}
  
}
