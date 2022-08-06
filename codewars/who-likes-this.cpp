#include <string>
#include <vector>

std::string likes(const std::vector<std::string> &names) {
  std::string result;

  if (names.size() == 0)
    result = "no one likes this";
  else if (names.size() == 1) {
    result.append(names[0]);
    result.append(" likes this");
  } else if (names.size() == 2) {
    result.append(names[0]);
    result.append(" and ");
    result.append(names[1]);
    result.append(" like this");
  } else if (names.size() == 3) {
    result.append(names[0]);
    result.append(", ");
    result.append(names[1]);
    result.append(" and ");
    result.append(names[2]);
    result.append(" like this");
  } else {
    result.append(names[0]);
    result.append(", ");
    result.append(names[1]);
    result.append(" and ");
    result.append(std::to_string(names.size() - 2));
    result.append(" others like this");
  }

  return result;
}

#include <iostream>
int main() {
  std::cout << likes({"Alex", "Jacob", "Mark", "Max"}) << "\n";

  return 0;
}
