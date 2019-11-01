#include <iostream>
#include <array>

int main()
{
  std::array<int, 10> serie;
  serie.at(0) = 0;
  serie.at(1) = 2;
  serie.at(2) = 1;

  for (int i{3}; i < serie.size(); i++)
  {
    serie.at(i) = serie.at(i - 1) + serie.at(i - 2) - serie.at(i - 3);
  }

  for (auto elem : serie)
  {
    std::cout << elem << " - ";
  }

  std::cout << std::endl;

  float suma{0};

  for (auto elem : serie)
  {
    suma += elem;
  }

  std::cout << "La suma es: " << suma << "\n";
  std::cout << "La media es: " << suma / serie.size() << "\n";

  return 0;
}
