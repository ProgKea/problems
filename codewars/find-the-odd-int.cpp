#include <vector>

int findOdd(const std::vector<int> &numbers) {
  int result, count;

  for (int i = 0; i < numbers.size(); i++) {
    for (int j = 0; j < numbers.size(); j++) {
      if (numbers[j] == numbers[i])
        count++;
    }
    if (count % 2 != 0)
      result = numbers[i];
    count = 0;
  }

  return result;
}

#include <iostream>
int main() {
  std::cout << findOdd(std::vector<int>{20, 1, -1, 2, -2, 3, 3, 5, 5, 1, 2, 4,
                                        20, 4, -1, -2, 5})
            << "\n";

  return 0;
}
