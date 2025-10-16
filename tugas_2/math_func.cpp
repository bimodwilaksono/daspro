// Deskripsi: translasi kasus berikut ke dalam sebuah program
// 1. y = a3 + 7, tentukan hasil dari y
// 2. y = ax2 + bx + c , tentukan hasil dari y
// 3. Buatlah program untuk memasukkan 5 bilangan:
//    a. Tentukan jumlah dari 5 bilangan tersebut
//    b. Tentukan rata-rata dari 5 bilangan tersebut
// 4. Buatlah program untuk konversi suhu berikut:
// a. Celcius to Fahrenheit
//    F = 9/5 C +32
// b. Celcius to Kelvin
//    К = С + 273
// c. Celcius to Reamur
//    R = 4/5 * С.

#include <iostream>
#include <cmath>
using namespace std;

void func1(double a);
void func2(int a, int b, int c, int x);
void func3(int a, int b, int c, int d, int e);
void func4(float celcius);

int main() {
  func1(3);
  func2(1, 1, 1, 2);
  func3(5, 5, 5, 5, 5);
  func4(5);
  return 0;
}

void func1(double a = 2) {
  double result = pow(a, 3) + 7;
  cout << "No 1 : " << result << endl; 
}

void func2(int a, int b, int c, int x) {
  double result = a * pow(x, 2) + b * x + c;
  cout << "No 2 : " << result << endl;
}

void func3(int a, int b, int c, int d, int e) {
  int sum = a + b + c + d + e;
  cout << "No 3a: Sum " << sum << endl;

  float avg = (float) sum / 5;
  cout << "No 3b: Average " << avg << endl;
}

void func4(float celcius) {
  // a.) C to F
  float fahrenheit = ((float) 9 / 5) * celcius + 32;
  cout << "Fahrenheit: " << fahrenheit << endl;

  // b.) C to Kelvin
  float kelvin = celcius + 273;
  cout << "Kelvin : " << kelvin << endl;

  // c.) C to Reamur
  float reamur = ((float) 4 / 5) * celcius;
  cout << "Reamur : " << reamur << endl;
}