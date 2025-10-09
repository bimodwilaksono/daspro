#include <iostream>
using namespace std;

int main() {
  int x;
  cout << "Masukkan Nilai x \n";
  cin >> x;
  cout << "Digit Terakhir dari " << x << " adalah " << x % 10 << endl;
  return 0;
}