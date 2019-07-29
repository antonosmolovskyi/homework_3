#include <iostream>


int main () {
  int num = 0;
  int counter = 0;
  const int TWO = 2;
  const int ZERO = 0;
  const int FIFTY = 50;
  const int SIXSTY = 60;
  const int NINETY = 90;
  std::cout<<"Please Enter numbers: " << std::endl;
  std::cout<<"/if you want to stop entering numbers, enter * " << std::endl;
  for (int i = ZERO; i < FIFTY; ++i) {
    std::cin >> num;
    if ( num >= -SIXSTY && num <= NINETY) {
      if (num == '*') {
        i = FIFTY;
      }
      if (num % TWO != ZERO) {
        counter += num;
      }
    } else {
        std::cout << "please enter correct number (-60 to 90)" << endl;
        --i;
      }
  }
  std::cout << counter ;
  return 0;
}

