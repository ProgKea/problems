#include <string>

std::string disemvowel(const std::string &str) {
  std::string result;
  std::string vowels = "aeiouAEIOU";
  bool vowel = false;

  for (int i = 0; i < str.length(); i++) {
    for (int j = 0; j < vowels.length(); j++) {
      if (str[i] == vowels[j]) {
        vowel = true;
      }
    }
    if (!vowel)
      result.push_back(str[i]);
    vowel = false;
  }

  return result;
}

#include <iostream>
int main() {
  std::cout << disemvowel("This website is for losers LOL!") << "\n";
}
