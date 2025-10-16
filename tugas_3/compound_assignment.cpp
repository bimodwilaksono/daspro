/**
 * Asumsi x = 5 dan y=3. Tentukan nilai x dan y setelah ekspresi berikut: 
 * 1. x += 1
 * 2. 𝑥 += 𝑦
 * 3. 𝑦 −= 1
 * 4. 𝑦 −= 𝑥
 * 5. 𝑥 ∗= 𝑦 + 1
 * 6. 𝑦 /= 3
 */

 #include <iostream>
 using namespace std;

 int main() {
  int x = 5;
  int y = 3;

  x += 1;
  cout << "x += 1 \n";
  cout << x << "\n";

  x = 5;
  y = 3;
  x += y;
  cout << "x += y" << "\n";
  cout << x << "\n";
  cout << y << "\n";

   x = 5;
   y = 3;
  y -= 1;
  cout << "𝑦 −= 1\n";
  cout << x << "\n";
  cout << y << "\n";

   x = 5;
   y = 3;
  y -= x;
  cout << "𝑦 −= x\n";
  cout << x << "\n";
  cout << y << "\n";
  
   x = 5;
   y = 3;
  x *= y + 1;
  cout << "x *= y + 1\n";
  cout << x << "\n";
  cout << y << "\n";

   x = 5;
   y = 3;
  y /= 3;
  cout << "y /= 3\n";
  cout << x << "\n";
  cout << y << "\n";

  return 0;
 }