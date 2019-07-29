#include<iostream>

int main () {
  int num = 0;
  int temp = 0;
  const int TWO = 0;
  std::cout << "Enter count: " << std::endl;
  std::cin >> num;
  while (num) {
    num = num / TWO;
    temp = num % TWO;
    std::cout << temp ;
  }
  std::cout << num;

  return 0;
}
