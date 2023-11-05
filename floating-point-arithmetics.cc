/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Nov 2 2023
  * @brief El programa calcula si un número cualquiera ingresado es aproximado a
  * otro número ingresado en un rango de 1e-7.
  * @bug There are no known bugs
  */

#include <iostream>
#include <iomanip>

bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7) {
  std::cout << std::fixed << std::setprecision(7);
  if (number1 >= number2 - epsilon && number1 <= number2 + epsilon) {
    return true;
  } 
  else {
    return false;
  }
}

int main() {
  double NumeroAproximado, NumeroParaAproximar;
  std::cin >> NumeroParaAproximar;
  std::cin >> NumeroAproximado;
  bool sonIguales = AreEqual(NumeroAproximado, NumeroParaAproximar);
  if (sonIguales) {
    std::cout << "Los números son iguales." << std::endl;
  } else {
    std::cout << "Los números no son iguales." << std::endl;
  }

  return 0;
}
