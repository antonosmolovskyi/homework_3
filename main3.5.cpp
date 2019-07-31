#include <iostream>
#include <string>
#include <algorithm>

int main() {
  int value;
  std::cin >> value;
  const int TEN = 10;
  const int ZERO = 0;
  if (value % TEN == 0) {
    while (value % 10 == 0) {
      value /= 10;
    }
  }
  std::string s = std::to_string(value);
  std::reverse(s.begin(), s.end());
  std::cout << s;
  return 0;
}
