#include <iostream>

using namespace std;

int main() {
  unsigned long n;

  cin >> n;

  cout << n << " ";

  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
      cout << n << " ";
    } else {
      n *= 3;
      n = n + 1;
      cout << n << " ";
    }
  }
}
