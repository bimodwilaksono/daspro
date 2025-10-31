#include <iostream>
using namespace std;

int main() {
  int jumlah_mobil, total_harga_mobil = 0;
  string nama_pembeli, langganan;

  cout << "PROGRAM PENJUALAN MOBIL";
  cout << "\n=============================\n";

  cout << "Jumlah Mobil yang dijual: ";
  // cin jumlah mobil;
  cin >> jumlah_mobil;

  cout << "Nama Pembeli: ";
  // cin nama
  cin >> nama_pembeli;

  cout << "Apakah Pembeli Langganan [Y/T]: ";
  // cin langganan
  cin >> langganan;

  cout << "----------------------\n";

  for (int i = 1; i <= jumlah_mobil; i++) {
    string nama_mobil, jenis_mobil, tahun_produksi;
    
    int harga_jual, 
    jumlah_jual, 
    total_after_diskon, 
    total_jual;

    double harga_diskon, 
    total_diskon_persen = 0, 
    member_diskon = 0.10, 
    gt2_diskon = 0.15;

    cout << "Mobil ke " << i << endl;
    cout << "Nama Mobil\t\t: ";
    // cin Nama Mobil
    cin >> nama_mobil;

    cout << "Jenis Mobil\t\t: ";
    // cin jenis mobil
    cin >> jenis_mobil;

    cout << "Tahun Produksi\t\t: ";
    // cin tahun
    cin >> tahun_produksi;
    
    cout << "Satuan Jual\t\t: Unit\n";
    cout << "Harga Jual\t\t: Rp ";
    // cin harga jual
    cin >> harga_jual;

    cout << "Jumlah Jual\t\t: ";
    // cin jumlah jual;
    cin >> jumlah_jual;

    total_jual = harga_jual * jumlah_jual;

    cout << "Total Jual\t\t: Rp " << total_jual << endl;
    
    // Check Langganan Y atau T, cout Diskon 10%

    if (langganan == "Y") {
      total_diskon_persen += member_diskon;
    }

    if (jumlah_jual > 2) {
      total_diskon_persen += gt2_diskon;
    }

    harga_diskon = total_diskon_persen * total_jual;
    cout << "Diskon " << total_diskon_persen*100 << "%\t\t: " << (int) harga_diskon << endl;

    total_after_diskon = total_jual - (int) harga_diskon;
    total_harga_mobil += total_after_diskon;
    cout << "Total Setelah Diskon\t: Rp " << total_after_diskon << endl;
    cout << "\n-----------------------\n";
  }

  cout << "\n=============================\n";
  cout << "Nama Pembeli\t\t: " << nama_pembeli << endl;
  cout << "Langganan\t\t: " << langganan << endl;
  cout << "Jumlah Mobil\t\t: " << jumlah_mobil << endl;
  cout << "Total Harga Mobil\t: Rp " << total_harga_mobil << endl;

  double harga_pajak = 0.10 * total_harga_mobil;
  cout << "Pajak 10%\t\t: Rp " << (int) harga_pajak << endl;

  int total_akhir = total_harga_mobil - (int) harga_pajak;
  cout << "Total Akhir\t\t: Rp " << (int) total_akhir  << endl;

  string bonus = "TISSUE KABIN";

  if ( total_akhir > 200000000) {
    bonus = "SARUNG COVER MOBIL";
  }
  cout << "Bonus\t\t: " << bonus << endl;
  cout << "=============================\n";

  return 0;
}