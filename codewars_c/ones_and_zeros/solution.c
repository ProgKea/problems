#include <math.h>
#include <stddef.h>

unsigned binary_array_to_numbers(const unsigned *bits, size_t count) {
  unsigned result = 0;
  for (size_t i = 0; i < count; i++) {
    result += bits[i] * pow(2, count - i - 1);
  }
  return result;
}

int main = 0;
