#include <map>
#include <string>

std::string duplicate_encoder(const std::string &word) {
  std::map<char, unsigned> char_count;
  std::string result;

  for (auto i : word) {
    char_count[std::tolower(i)]++;
  }

  for (auto i : word) {
    if (char_count[std::tolower(i)] > 1)
      result.push_back(')');
    else
      result.push_back('(');
  }

  return result;
}

#include <iostream>
int main() {
  std::cout << duplicate_encoder("Supralapsarian") << "\n";

  return 0;
}
