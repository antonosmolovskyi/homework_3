#include <iostream>
#include <string>
#include <algorithm>

int main() {
  int value;
  std::cin >> value;
  const int TEN = 10;
  const int ZERO = 0;
  if (value % TEN == ZERO) {
    while (value % TEN == ZERO) {
      value /= TEN;
    }
  }
  std::string s = std::to_string(value);
  std::reverse(s.begin(), s.end());
  std::cout << s;
  return 0;
}
