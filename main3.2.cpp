#include <iostream>

int main() {
  int valuer = 0;
  int valuer_number = 1;
  const int TEN = 10;
  const int ZERO = 0;
  const int ONE = 1;
	std::cin >> valuer;
	int save_to_valuer = valuer;
	int save_to_valuer1 = valuer;
	while ((valuer/=TEN) > ZERO) valuer_number++;
  int first_value = ONE;
  int second_value = TEN;
  int counter = ZERO;
  float average = ZERO;

  for (int i = ZERO; i < valuer_number; ++i) {
     counter += (save_to_valuer % second_value) / first_value;
     second_value *= TEN;
     first_value *= TEN;
     save_to_valuer = save_to_valuer1;
     average += i;
  }
  std::cout << "summ =  " << counter << std::endl;
  std::cout << "average = " << counter / average;
  return 0;
}
