#include <iostream>
#include <set>

using namespace std;

set<unsigned long> from_one_to_n(const unsigned long& n) {
  set<unsigned long> numbers;

  for (unsigned long i = 1; i <= n; i++) {
    numbers.insert(i);
  }

  return numbers;
}

int main() {
  unsigned long n;

  cin >> n;

  unsigned long number;
  set<unsigned long> second_line;
  for (unsigned long i = 0; i < n - 1; i++) {
    cin >> number;
    second_line.insert(number);
  }

  set<unsigned long> numbers = from_one_to_n(n);

  for (auto &number : numbers) {
    if (auto search = second_line.find(number); search != second_line.end()) {
    } else {
      cout << number;
    }
  }
}
