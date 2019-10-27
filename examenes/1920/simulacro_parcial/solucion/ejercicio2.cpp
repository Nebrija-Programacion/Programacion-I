#include <iostream>
#include <array>
#include <vector>

int main()
{
  std::array<int, 20> serie;
  serie.at(0) = 0;
  serie.at(1) = 1;

  for (int i{2}; i < serie.size(); i++)
  {
    serie.at(i) = serie.at(i - 1) + serie.at(i - 2);
  }

  srand(time(NULL));
  std::array<int, 100> random_numbers;
  for (int i{0}; i < random_numbers.size(); i++)
  {
    random_numbers.at(i) = (rand() % 500) + 1;
  }

  std::vector<int> filtered;

  for (auto elem : random_numbers)
  {
    for (auto fib : serie)
    {
      if (elem == fib)
      {
        filtered.push_back(elem);
        break;
      }
    }
  }

  for (auto f : filtered)
  {
    std::cout << f << " - ";
  }

  std::cout << std::endl;

  return 0;
}
