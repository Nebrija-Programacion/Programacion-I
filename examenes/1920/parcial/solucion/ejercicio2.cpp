#include <iostream>
#include <string>

int main()
{
  std::string word;
  std::cout << "Introduce una palabra: ";
  std::cin >> word;

  for (int i = word.size() - 1; i >= 0; i--)
  {
    std::cout << word.at(i);
  }

  std::cout << std::endl;

  for (int i = 0; i < word.size() / 2; i++)
  {
    if (word.at(i) != word.at(word.size() - 1 - i))
    {
      std::cout << "No es un palindromo\n";
      return 0;
    }
  }

  std::cout << "Es un palindromo\n";

  return 0;
}
