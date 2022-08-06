#include <string>

const std::string HEX = "0123456789ABCDEF";

class RGBToHex {
public:
  static std::string rgb(int r, int g, int b) {
    std::string hex_color;

    r = r < 0 ? 0 : r;
    g = g < 0 ? 0 : g;
    b = b < 0 ? 0 : b;

    r = r > 255 ? 255 : r;
    g = g > 255 ? 255 : g;
    b = b > 255 ? 255 : b;

    hex_color.push_back(HEX[r / 16]);
    hex_color.push_back(HEX[r % 16]);
    hex_color.push_back(HEX[g / 16]);
    hex_color.push_back(HEX[g % 16]);
    hex_color.push_back(HEX[b / 16]);
    hex_color.push_back(HEX[b % 16]);

    return hex_color;
  }
};

#include <iostream>

int main() {
  std::cout << RGBToHex::rgb(220, 20, 60);

  return 0;
}