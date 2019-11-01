#include <iostream>
#include <vector>

int main()
{
  std::vector<float> values;
  float interval = 0.01;

  for (float x{3}; x <= 6; x += interval)
  {
    values.push_back(x * x + 2 * x);
  }

  float area{0};
  for (auto y : values)
  {
    area += y * interval;
  }

  std::cout << "La integral aproximada (intervalo: " << interval << ") es " << area << "\n";

  return 0;
}