/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Nov 1 2022
  * @brief Este programa calcula una función con tres incognitas, x,y,t y
  * calcula el valor de la función en ese punto.
  * @bug There are no known bugs
  */

#include <iostream>
#include <cmath>

int main() {
  double x, y, t;
  std::cin >> x;
  std::cin >> y;
  std::cin >> t;
  double numerador = sqrt((2 * t) - 4);
  double denominador = ((x * x) - (y * y));
  double funcion = numerador / denominador;
  std::cout << funcion << std::endl;
return 0;
}
