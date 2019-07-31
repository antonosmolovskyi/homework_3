#include <iostream>


int main () {
  int num = 0;
  int counter = 0;
  std::cout<<"Please Enter numbers: " << std::endl;
  std::cout<<"/if you want to stop entering numbers, enter * " << std::endl;
  for (int i = 0; i < 50; ++i) {
    std::cin >> num;
    if ( num >= -60 && num <= 90) {
      if (num == '*') {
        i = 50;
      }
      if (num % 2 != 0) {
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

