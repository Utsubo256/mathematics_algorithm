#include <iostream>
using namespace std;

bool isprime(long long N) {
  for (long long i = 2; i * i <= N; i++) {
    if (N % i == 0) return false;
  }
  return true;
}

int main() {  
  int N;
  int count = 0;
  cin >> N;
  for (int i = 2; i <= N; i++) {
    if (isprime(i) == true) {
      cout << i << " ";
    }
  }
}
