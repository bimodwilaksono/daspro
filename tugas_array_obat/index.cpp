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

void printBorder() {
  for(int i = 0; i < 70; i++) {
    printf("%c", '-');
  }
}

int main() {
  int n = 5;
  string kode[n], namaObat[n], satuan[n];
  int jumlahObat[n], hargaObat[n], totalHarga[n];

  printf("== Input Data Obat (Minimal %d Data) ===\n", n);

  for (int i = 0; i < n; i++) {
    cout << "\nInput Obat " << i + 1 << endl;
    cout << "Kode Obat: ";
    cin >> kode[i];

    cout << "Nama Obat: ";
    cin >> namaObat[i];

    cout << "Satuan: ";
    cin >> satuan[i];

    cout << "Jumlah: ";
    cin >> jumlahObat[i];

    cout << "Harga: ";
    cin >> hargaObat[i];

    totalHarga[i] = jumlahObat[i] * hargaObat[i];
  }



  cout << "\nLaporan Data Obat\n";

  // Header Table
  printBorder();
  printf("\n%-5s %-10s %-15s %-10s %-5s %-10s %-10s\n", "No", "Kode Obat", "Nama Obat", "Satuan", "Jumlah", "Harga", "Total");
  printBorder();

  int sumJumlah = 0, sumHarga = 0, sumTotal = 0; 
  // Body table
  for(int i = 0; i < n; i++) {
  printf("\n%-5d %-10s %-15s %-10s %-5d %-10d %-10d\n", i + 1, kode[i].c_str(), namaObat[i].c_str(), satuan[i].c_str(), jumlahObat[i], hargaObat[i], totalHarga[i]);
  sumJumlah += jumlahObat[i];
  sumHarga += hargaObat[i];
  sumTotal += totalHarga[i];
  }

  printBorder();
  printf("\n%-43s %-5d %-10d %-10d\n", "Total:", sumJumlah, sumHarga, sumTotal);
  printBorder();
  return 0;
}
