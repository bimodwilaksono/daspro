# Bimo Dwi Laksono
# A18.2025.00201
# Dasar Pemrograman

## Kasus 1 Perulangan atau Looping

### Notasi Algoritma
```
repeat 5 times
  Output("Hello World")
```

### Kode Program
```cpp
#include <iostream>
using namespace std;

int main() {
  for(int i = 1; i <= 5; i++) {
    cout << "Hello World" << endl;
  }
  return 0;
}
```

## Kasus 2 - Deret Angka
### Notasi Algoritma
```
// Untuk Output 0 1 2 3 4 5 6 7 8 9
Kamus
initial: int

initial = 0
last = 10

repeat
  output(initial)
  initial += 1
until i < last

// Untuk Output 1 2 3 4 5 6 7 8 9 10
Kamus
initial: int

initial = 1
last = 10

repeat
  output(initial)
  initial += 1
until i <= last

```
Perbedaan kedua kasus deret angka tersebut terletak pada nilai awal looping nya dan kondisi nya yg berbeda. Yg pertama berhenti looping ketika nilai initial nya mencapai kurang dari 10. Yg kedua berhenti looping ketika nilai initial nya mencapai nilai 10. 

### Kode Program
```cpp
#include <iostream>
using namespace std;

int main() {

  // Kasus 0 ... 9
  for(int i = 0; i < 10; i++) {
    cout << i << " ";
  }

  // Kasus 1 ... 10
  for(int i = 1; i <= 10; i++) {
    cout << i << " ";
  }
  return 0;
}
```

## Kasus 2a Modifikasi Deret Angka
### Notasi Algoritma
```
Kamus
n: int
a: int

Algoritma
input(n)
input(a)

while a <= n do
  output(a)
  a++
endwhile
```

### Kode Program
```cpp
#include <iostream>
using namespace std;

int main() {

  int n, a;
  cout << "Input n: ";
  cin >> n;
  cout << "Input a: ";
  cin >> a;

  while (a <= n) {
    cout << a << " ";
    a++;
  }

  return 0;
}
```

## Kasus 3 Deret Angka Menurun
### Notasi Algoritma
```
// Kasus 10 ... 0
i = 10
j = 0

while i >= j do
  output(i)
  i--
endwhile

// Kasus 9 ... 1
i = 9
j = 1

while i >= j do
  output(i)
  i--
endwhile
```

### Kode Program
```cpp
#include <iostream>
using namespace std;

int main() {

  // 10 ... 0
  int i = 10;
  int j = 0

  while (i >= j) {
    cout << i << " ";
    i--;
  }

  // 9 ... 1
  i = 9;
  j = 1;

  while (i >= j) {
    cout << i << " ";
    i--;
  }

  return 0;
}
```

## Kasus 3a Modifikasi Deret Angka Menurun
### Notasi Algoritma
```
KAMUS
a: int
b: int

ALGORITMA
input(a)
input(b)

while b >= a do
  output(b)
  b--
endwhile
```
### Kode Program
```cpp
#include <iostream>
using namespace std;

int main() {
  int a, b, increment;

  cout << "Input a: ";
  cin >> a;

  cout << "Input b: ";
  cin >> b;
  
  while (b >= a) {
    cout << b << " ";
    b--
  }


  return 0;
}
```
## Kasus 4 Modifikasi Program
### Notasi Algoritma
```
KAMUS
a: int
b: int
increment: int

ALGORITMA
input(a)
input(b)
input(increment)

while a <= b do
  output(a)
  a = a - increment
endwhile
```
### Kode Program
```cpp
#include <iostream>
using namespace std;

int main() {
  int a, b, increment;

  cout << "Input a: ";
  cin >> a;

  cout << "Input b: ";
  cin >> b;

  cout << "Input increment value: ";
  cin >> increment;
  
  while (a <= b) {
    cout << b << " ";
    a += increment;
  }


  return 0;
}
```