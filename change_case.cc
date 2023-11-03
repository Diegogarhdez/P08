/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @author Diego García Hernández alu0101633732@ull.edu.es
  * @date Nov 1 2022
  * @brief El programa lee una cadena de caracteres y cambia las letras
  * mayusculas por minusculas y viceversa.
  * @bug There are no known bugs
  */

#include <iostream>

int main() {
  std::string palabra1;
  std::cin >> palabra1;
  for (char &conversor : palabra1) {
    if (conversor >= 'A' && conversor <= 'Z') {
      conversor = static_cast<char>(conversor + 32);
    } 
    else if (conversor >= 'a' && conversor <= 'z') {
      conversor = static_cast<char>(conversor - 32);
    }
  } 
  std::cout << palabra1 << std::endl;

  return 0;
}
