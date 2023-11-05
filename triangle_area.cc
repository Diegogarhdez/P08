/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Nov 3 2023
  * @brief El programa calcula el area comprendida en un triangulo.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>

double Area(double a, double b, double c) {
  double perimetro = (a + b + c) / 2;
  double parentesis1 = (perimetro - a);
  double parentesis2 = (perimetro - b);
  double parentesis3 = (perimetro - c);
  double argumento = perimetro * parentesis1 * parentesis2 * parentesis3;
  double area = sqrt(argumento); 
  return area;
}

int main() {
  double lado1, lado2, lado3;
  std::cin >> lado1 >> lado2 >> lado3;
  double resultado = Area(lado1, lado2, lado3);
  std::cout << resultado << std::endl;
return 0;
}
