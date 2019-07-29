#include <iostream>

int main() {
  int a = 0;
  std::cout << "Please, enter the number of your ticket ";
  std::cin >> a;
  int counter_end = 0;
  int counter_begin = 0;
  int number = 10;
  const int TEN = 10;
  const int THREE = 3;
  for (int i = 0; i < THREE; ++i) {
    counter_end += a % number;
    a /= TEN;
  }
  for (int i = 0; i < THREE; ++i) {
    counter_begin += a % number;
    a /= TEN;
  }
  if (counter_begin == counter_end) {
    std::cout << "you have happy ticket ";
  }
    return 0;
}
