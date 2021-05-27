#include <iostream>

int main() {
  double precioactual, dolares, colones;

  std::cout << "ingrese el precios actual del dolar en colones"<<std::endl;
  std::cin>> precioactual; 
  std::cout << "ingrese la cantidad de dolares que se desea convertir"<<std::endl;
  std::cin>> dolares;
  colones= dolares*precioactual;
  std::cout << dolares << " dolares equivalen a"<<colones<<"colones"<<std::endl;
}  
