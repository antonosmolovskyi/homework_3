#include <iostream>

int main() {
  int count;
  std::cout << "Enter quantity of numbers which you want to check for divisibility for 3 " << std::endl;
  std::cin >> count;
  int number;
  int summ = 0;
  std::cout << "Enter the numbers which you want to check for divisibility for 3 " << std::endl;
  for (int i = 0; i < count; ++i) {
    std::cin >> number;
    while (number) {
      summ += number % 10;
      number /= 10;
    }
  }
  if (summ % 3 == 0) {
    std::cout << "YES " << std::endl;
  }
  else {
    std::cout << "NO " << std::endl;
  }
  return 0;
}

