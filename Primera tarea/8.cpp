#include <iostream>

using namespace std;

int main() {
  char caracter;
  cout << "Coloque un carácter en su teclado para ver su valor en codigo ASCH" << endl;
  cin >> caracter;
  cout << static_cast<int>(caracter)<< endl;
}
