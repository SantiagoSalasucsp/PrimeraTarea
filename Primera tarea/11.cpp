#include <iostream>

using namespace std;

int main() {
  float peso = 0;
  float altura = 0;

  cout << "Coloque su peso en kilogramos" << endl;
  cin >> peso;
  cout << "Ahora coloque su altura en metros" << endl;
  cin >> altura;
  float imc = peso/(altura*altura);
  cout << "Este es su Indice de Masa Corporal: "<< imc << endl;
  if (imc < 18.5) {
    cout << "Usted cuenta con Bajo peso";
  }
  else if (imc >= 18.5 && imc <= 24.9) {
    cout << "Usted cuenta con una contextura normal";
  }
  else if (imc > 24.9 && imc <= 29.9) {
    cout << "Usted cuenta con Sobrepeso";
  }
  else {
    cout << "Usted cuenta con Obesidad";
  }
}
