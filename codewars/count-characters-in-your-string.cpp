#include <map>
#include <string>

std::map<char, unsigned> count(const std::string &string) {
  std::map<char, unsigned> result;

  for (auto i : string) {
    result[i]++;
  }

  return result;
}

#include <iostream>
int main() {
  std::cout << count("aba")['a'] << "\n";
  return 0;
}
