#include <string>
#include <vector>

int countSmileys(std::vector<std::string> arr) {
  int count = 0;

  for (auto i : arr) {
    if (i.length() == 3) {
      if ((i[0] == ':' || i[0] == ';') && (i[1] == '-' || i[1] == '~') &&
          (i[2] == ')' || i[2] == 'D'))
        count++;
    } else {
      if ((i[0] == ':' || i[0] == ';') && (i[1] == ')' || i[1] == 'D'))
        count++;
    }
  }

  return count;
}

#include <iostream>
int main() {
  std::cout << countSmileys(
                   std::vector<std::string>{":)", ":(", ":D", ":O", ":;"})
            << "\n";

  return 0;
}
