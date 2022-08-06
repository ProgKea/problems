#include <iostream>
#include <string>

int i;

std::string even_or_odd(int i)
{
  if (i % 2 == 0) return "Even\n";
  else return "Odd\n";
}

int main()
{
  std::cin >> i;
  std::cout << even_or_odd(i);
  return 0;
}
