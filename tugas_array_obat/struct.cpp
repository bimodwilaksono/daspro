/**
 * Tugas Array Multi Dimensi

Buatlah program untuk pendataan obat
dengan data sbb;
Kode
nama obat
satuan
jumlah
harga

dengan ketentuan semua data di input sesuai minimal 5 data obat
hitung total harga=jumlahxharga
dan tampilkan laporan data obat lengkap dengan total !
Laporan data Obat
------------------------------------------------
No  Nama Obat Satuan    Jumlah    Harga    Total 
------------------------------------------------
1   Bodrex     Kapsul    3        5000	   15000
2   GPU        Botol	 5        15000    75000
.
.
n
--------------------------------------------------
Total :                  8        20000    90000    
--------------------------------------------------    

 */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>
using namespace std;

struct Medicine {
  string kode;
  string name;
  string satuan;
  int jumlah;
  int harga;
  int totalHarga;
};

void printBorder() {
  for(int i = 0; i < 70; i++) {
    printf("%c", '-');
  }
}

int main() {
  int n = 5;
  Medicine medicines[n];

  printf("== Input Data Obat (Minimal %d Data) ===\n", n);

  for (int i = 0; i < n; i++) {
    cout << "\nInput Obat " << i + 1 << endl;
    cout << "Kode Obat: ";
    getline(cin, medicines[i].kode);

    cout << "Nama Obat: ";
    getline(cin, medicines[i].name);

    cout << "Satuan: ";
    getline(cin, medicines[i].satuan);

    cout << "Jumlah: ";
    cin >> medicines[i].jumlah;

    cout << "Harga: ";
    cin >> medicines[i].harga;

    medicines[i].totalHarga = medicines[i].jumlah * medicines[i].harga;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
  }



  cout << "\nLaporan Data Obat\n";

  // Header Table
  printBorder();
  printf("\n%-5s %-10s %-15s %-10s %-5s %-10s %-10s\n", "No", "Kode Obat", "Nama Obat", "Satuan", "Jumlah", "Harga", "Total");
  printBorder();

  int sumJumlah = 0, sumHarga = 0, sumTotal = 0; 
  // Body table
  for(int i = 0; i < n; i++) {
  printf("\n%-5d %-10s %-15s %-10s %-5d %-10d %-10d\n", 
    i + 1,
    medicines[i].kode.c_str(), medicines[i].name.c_str(),medicines[i].satuan.c_str(), 
    medicines[i].jumlah, medicines[i].harga, medicines[i].totalHarga
  );
  sumJumlah += medicines[i].jumlah;
  sumHarga += medicines[i].harga;
  sumTotal += medicines[i].totalHarga;
  }

  printBorder();
  printf("\n%-43s %-5d %-10d %-10d\n", "Total:", sumJumlah, sumHarga, sumTotal);
  printBorder();
  return 0;
}
