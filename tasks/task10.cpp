#include <iostream>
using namespace std;

int main() {
  int N;
  long long total = 1;
  cin >> N;
  for (int i = N; i > 0; i--) {
    total *= i;
  }
  cout << total << endl;
  return 0;
}
