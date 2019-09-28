#include <string>
#include <array>
#include <iostream>

int main()
{
  std::string palabra{"avion"};
  std::string adivinada{"*****"};
  int vidas{7};

  std::array<std::string, 8> dibujovidas;
  dibujovidas.at(0) = " |\n O\n/|\\\n/ \\\n";
  dibujovidas.at(1) = " |\n O\n/|\\\n/ \n";
  dibujovidas.at(2) = " |\n O\n/|\\ \n";
  dibujovidas.at(3) = " |\n O\n/|\n";
  dibujovidas.at(4) = " |\n O\n/\n";
  dibujovidas.at(5) = " |\n O\n";
  dibujovidas.at(6) = " |\n";
  dibujovidas.at(7) = "\n";

  while (vidas > 0)
  {
    char letra;
    std::cout << "Introduce una letra: ";
    std::cin >> letra;

    // comprueba si la letra forma parte de palabra
    int pos = palabra.find(letra);
    if (pos == -1)
    {
      // la letra no forma parte
      vidas = vidas - 1;
      std::cout << "la letra " << letra
                << " no forma parte que la palabra secreta, te quedan "
                << vidas << "vidas\n";
    }
    else
    {
      std::cout << "la letra " << letra
                << " forma parte que la palabra secreta, te quedan "
                << vidas << "vidas\n";
    }

    std::cout << dibujovidas.at(vidas) << "\n\n";
    std::cout << adivinada << "\n\n";

    if (adivinada == palabra)
    {
      std::cout << "Has ganado\n";
      return 0;
    }
  }

  std::cout << "oh oh \n\n"
            << dibujovidas.at(vidas);

  return 0;
}