#include <iostream>

int main() {
  int a = 0;
  std::cout << "Please, enter the number of your ticket ";
  std::cin >> a;
  int counter_end = 0;
  int counter_begin = 0;
  int number = 10;
  for (int i = 0; i < 3; ++i) {
    counter_end += a % number;
    a /= 10;
  }
  for (int i = 0; i < 3; ++i) {
    counter_begin += a % number;
    a /= 10;
  }
  if (counter_begin == counter_end) {
    std::cout << "you have happy ticket ";
  }
    return 0;
}
