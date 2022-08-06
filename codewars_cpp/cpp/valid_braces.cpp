#include <string>

bool valid_braces(std::string braces) {
  std::string closing_brace = ")]}";

  for (auto i : braces) {
    if (i == closing_brace[0] || i == closing_brace[1] || i == closing_brace[2])
  }

  return false;
}

#include <iostream>

int main() {
  std::cout << valid_braces("[({})](]") << std::endl;

  return 0;
}
