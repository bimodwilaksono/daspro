#include <iostream>
using namespace std;

float disc_elektronik(string statusPelanggan, int jumlahBarang, string metodePembayaran) {
  if (statusPelanggan == "Member" && jumlahBarang > 10 && metodePembayaran == "Cash") {
    return 0.15;
  }

  if (statusPelanggan == "Member" &&  metodePembayaran == "Cash") {
    return 0.12;
  }

  if (jumlahBarang > 10) {
    return 0.08;
  }

  return 0;
}

float disc_pakaian(string statusPelanggan, int jumlahBarang) {
  if (statusPelanggan == "Member" && jumlahBarang > 10) {
    return 0.1;
  }

  return 0.05;
}

int main() {
  string jenis_barang;
  string status_pelanggan;
  string metode_pembayaran;
  int jumlah_barang;
  float diskon = 0;

  cout << "Masukkan Jenis Barang: ";
  cin >> jenis_barang;

  cout << "Masukkan status_pelanggan: ";
  cin >> status_pelanggan;

  cout << "Masukkan Metode Pembayaran: ";
  cin >> metode_pembayaran;

  cout << "Masukkan Jumlah Barang: ";
  cin >> jumlah_barang;

  if (jenis_barang == "Makanan") {
    diskon = 0.02;
  }

  if (jenis_barang == "Pakaian") {
    diskon = disc_pakaian(status_pelanggan, jumlah_barang);
  }

  if (jenis_barang == "Elektronik") {
    diskon = disc_elektronik(status_pelanggan, jumlah_barang, metode_pembayaran);
  }

  cout << "Total diskon adalah " << diskon * 100 << "%";
  return 0;
}