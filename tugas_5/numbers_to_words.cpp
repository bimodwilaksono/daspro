#include <iostream>
#include <vector>
#include <string>
using namespace std;

string convertNumbers(int n) {
  if (n == 0) {
    return "Nol";
  }

  if (n == 1000) {
    return "Seribu";
  }

  vector<string> satuan = {
    "", "Satu", "Dua", "Tiga", "Empat", "Lima", "Enam", "Tujuh", "Delapan", "Sembilan", "Sepuluh", 
    "Sebelas", "Dua belas", "Tiga belas", "Empat belas", "Lima belas", 
    "Enam belas", "Tujuh belas", "Delapan belas", "Sembilan belas"
  };

  vector<string> pengali = {
    "", "Ribu", "Juta", "Milyar"
  };

  string kata = "";
  int pointer = 0;

  while (n > 0 ) {
    if (n % 1000 > 0) {

      int value = n % 1000;
      string temp = "";

      if (value >= 100) {
        if (value / 100 == 1) {
          temp = "Seratus";
        } else {
          temp = satuan[value / 100] + " Ratus ";
        }
        value %= 100;
      }

      if (value >= 20) {
        temp += satuan[value / 10] + " Puluh ";
        value %= 10;
      }

      if (value > 0) {
        temp += satuan[value] + " ";
      }

      temp += pengali[pointer] + " ";
      kata = temp + kata;
    }

    n /= 1000;
    pointer++;
  }

  return kata;
}

int main() {
  int x;
  cout << "Masukkan nilai: ";
  cin >> x;

  cout << convertNumbers(x) << endl;

  return 1;
}