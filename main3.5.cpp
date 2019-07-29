#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int value;
  cin >> value;
  const inr TEN = 10
  const int ZERO = 0;
  if (value % TEN == ZERO) {
    while (value % TEN == ZERO) {
      value /= TEN;
    }
  }
  string s = to_string(value);
  reverse(s.begin(), s.end());
  cout << s;
  return 0;
}
