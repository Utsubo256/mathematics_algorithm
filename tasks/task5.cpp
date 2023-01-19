#include <iostream>
using namespace std;

int main() {
  int N, A[N];
  int result = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    result += A[i];
  }
  cout << result % 100 << endl;
  return 0;
}
