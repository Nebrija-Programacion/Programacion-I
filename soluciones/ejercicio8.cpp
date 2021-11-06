#include <iostream>

int main() {
  int a{3};
  int b{5};
  int c{7};
  int max{0};
  if(a>b) max=a;
  else max=b;

  if(max<c) max = c;
} 