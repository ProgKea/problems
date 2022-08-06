#include <string>

std::string to_camel_case(std::string text) {
  std::string result;
  int skip;

  for (int i = 0; i < text.length(); i++) {
    if (text[i] == '-' || text[i] == '_') {
      result.push_back(std::toupper(text[i + 1]));
      skip = i + 1;
    }
    if (i != skip && !(text[i] == '-' || text[i] == '_')) {
      result.push_back(text[i]);
    }
  }

  return result;
}

#include <iostream>
int main() {
  std::cout << to_camel_case("The_Stealth_Warrior") << "\n";
  return 0;
}
