#include <iostream>
using namespace std;

int main() {

  int jumlah_angka;
  int max = 0;
  int input_angka;

  cout << "Masukkan Jumlah Angka: ";
  cin >> jumlah_angka;

  int i = 0;
  int nums[jumlah_angka];

  while (i < jumlah_angka) {
    cout << "Masukkan Nilai ke " << i+1 << ": ";
    cin >> input_angka;

    nums[i] = input_angka;
    i++;
  }

  for (i = 0; i < jumlah_angka; i++){
    if (nums[i] > max) {
      max = nums[i];
    }
  }

  cout << "Nilai Maksimal Adalah " << max;
  return 0;
}