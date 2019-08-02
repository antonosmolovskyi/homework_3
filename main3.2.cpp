#include <iostream>

int main() {
  int valuer = 0;
  int valuer_number = 1;
  std::cout << "Enter the number, to Calculate the sum and arithmetic mean of this number" << std::endl;
  std::cin >> valuer;
  int save_to_valuer = valuer;
  int save_to_valuer1 = valuer;
  while ((valuer/=10) > 0) valuer_number++;
  int first_value = 1;
  int second_value = 10;
  int counter = 0;
  float average = 0;

  for (int i = 0; i < valuer_number; ++i) {
     counter += (save_to_valuer % second_value) / first_value;
     second_value *= 10;
     first_value *= 10;
     save_to_valuer = save_to_valuer1;
     average += i;
  }
  std::cout << "summ =  " << counter << std::endl;
  std::cout << "average = " << counter / average;
  return 0;
}
