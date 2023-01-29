
#include <iostream>
using namespace std;
#define el endl;

int main() {

  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int A,B;
    cin >> A >> B;
    cout << A + B << el;
  }
  return 0;
}
