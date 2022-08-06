#include <string>

std::string createPhoneNumber(const int arr[10]) {
  std::string result = "(";

  for (int i = 0; i < 10; i++) {
    result.append(std::to_string(arr[i]));
    if (i == 2)
      result.append(") ");
    else if (i == 5)
      result.push_back('-');
  }

  return result;
}

#include <iostream>
int main() {
  int input[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
  std::cout << createPhoneNumber(input) << "\n";
}
