/**
 * Asumsi x = 5 dan y=3. Tentukan nilai x dan y setelah ekspresi berikut: 
 * 1. x++
 * 2. y++
 * 3. x--
 * 4. y--
 * 
 * Bagaimana jika syntax diatas diubah dengan:
 * 1. ++x
 * 2. ++y
 * 3. --x
 * 6. --y
 */

 #include <iostream>
 using namespace std;

 int main() {
  int x = 5;
  int y = 3;

  cout << --x << endl;
  cout << x << endl;

  cout << --y << endl;
  cout << y << endl;




  return 0;
 }