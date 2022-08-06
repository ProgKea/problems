#include <array>
#include <vector>

std::array<int, 2> two_oldest_ages(std::vector<int> ages) {
  int first_age = 0, second_age = 0, first_age_index = 0;
  for (int i = 0; i < ages.size(); i++) {
    for (int j = i + 1; j < ages.size(); j++) {
      if (ages[i] > ages[j]) {
        first_age = ages[i];
        first_age_index = i;
      }
    }
    if (i != first_age_index && ages[i] > second_age) {
      second_age = ages[i];
    }
  }
  return {first_age, second_age};
}

#include <iostream>
int main() {
  for (auto i : two_oldest_ages({1, 2, 10, 8}))
    std::cout << i << "\n";
  return 0;
}
