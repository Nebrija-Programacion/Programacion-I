#include <iostream>
#include <string>
#include <vector>

int main()
{
  std::string sentence;
  std::cout << "Introduce un frase: ";
  std::getline(std::cin, sentence);

  int contA{0};
  std::string word{""};
  std::vector<std::string> result;

  for (auto c : sentence)
  {
    if (c != ' ')
    {
      word.push_back(c);
      if (c == 'a')
        contA++;
    }
    else
    {
      if (contA >= 2)
        result.push_back(word);
      contA = 0;
      word = "";
    }
  }

  if (contA >= 2)
    result.push_back(word);

  for (auto word : result)
  {
    std::cout << word << "\n";
  }

  return 0;
}
