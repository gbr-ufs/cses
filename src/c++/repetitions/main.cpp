#include <iostream>
#include <string>

using namespace std;

int main() {
  string dna_sequence;
  char current;
  unsigned long count = 0, result = 0;

  cin >> dna_sequence;

  for (unsigned long i = 0; i < dna_sequence.length(); i++) {
    if (dna_sequence[i] != current) {
      current = dna_sequence[i];
      count = 1;
    } else {
      count++;
    }
    result = max(result, count);
  }

  cout << result;
}
