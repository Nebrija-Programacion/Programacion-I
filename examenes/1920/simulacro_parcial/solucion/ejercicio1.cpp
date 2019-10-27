#include <iostream>
#include <array>

int main()
{
  std::array<int, 20> serie;
  serie.at(0) = 0;
  serie.at(1) = 1;

  for (int i{2}; i < 20; i++)
  {
    serie.at(i) = serie.at(i - 1) + serie.at(i - 2);
  }
  for (auto elem : serie)
  {
    std::cout << elem << " - ";
  }

  std::cout << std::endl;

  return 0;
}