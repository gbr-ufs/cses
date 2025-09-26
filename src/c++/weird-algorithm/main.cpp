#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  unsigned long n;

  cin >> n;

  cout << n << " ";

  while (n != 1) {
    if (n % 2 == 0) {
      n /= 2;
      cout << n << " ";
    } else {
      n *= 3;
      n++;
      cout << n << " ";
    }
  }
}
