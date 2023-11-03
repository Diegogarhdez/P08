/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Nov 2 2023
  * @brief El programa da un número aleatorio comprendido entre n y m siendo n<m
  * @bug There are no known bugs
  */

#include <iostream>
#include <cstdlib>
#include <ctime>

int aleatorio(int numero1, int numero2) {
  std::srand(std::time(nullptr));
  int numero_aleatorio = numero1 + rand() % (numero2 - numero1 + 1);
  return numero_aleatorio;
}

int main() {
  int numero1, numero2;
  std::cin >> numero1;
  std::cin >> numero2;
  std::cout << aleatorio(numero1, numero2) << std::endl;
return 0;
}
