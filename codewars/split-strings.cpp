#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s) {
  std::vector<std::string> result;
  std::string step_result;

  for (int i = 0; i < s.length(); i++) {
    if (i % 2 == 0) {
      step_result = s.substr(i, 2);
      if (step_result.length() < 2) {
        step_result.append("_");
      }
      result.push_back(step_result);
    }
  }
  return result;
}
