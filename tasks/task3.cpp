#include <iostream>
using namespace std;

int main() {
  int N, A[59];
  int result = 0;
  cin >> N;
  for (int i = 0; i < N; i++) {
    cin >> A[i];
    result += A[i];
  }
  cout << result << endl;
  return 0;
}
