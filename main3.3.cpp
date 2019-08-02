#include<iostream>

int main () {
  int num = 0;
  int temp = 0;
  std::cout << "Enter count, to count the number of bits set in your number " << std::endl;
  std::cin >> num;
  while (num) {
    num = num / 2;
    temp = num % 2;
    std::cout << temp ;
  }
  std::cout << num;

  return 0;
}
