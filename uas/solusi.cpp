#include <iostream>
#include <vector>
using namespace std;

struct Sparepart {
  string kode;
  string nama;
  string satuan;
  int jumlah;
  int harga;
  double totalHarga;
  int totalBarang;
};

int jumlah(int a, int b) {
  if (b == 0) return a;

  return 1 + jumlah(a, b-1);
}

void hitungGanjilGenap(int n, int &ganjil, int &genap) {
  if (n == 0) return;

  if (n %2 == 0) {
    genap++;
  }

  if (n % 2 != 0) {
    ganjil++;
  }

  hitungGanjilGenap(n-1, ganjil, genap);
  cout << n << " ";
}

int cariKode(vector<Sparepart> &daftarSparepart, string &kode) {
  for(int i = 0; i < daftarSparepart.size(); i++) {
    if (daftarSparepart[i].kode == kode) return i;
  }

  return -1;
}

void inputSparepart(vector<Sparepart> &daftarSparepart) {
  Sparepart sparepart;

  cout << "Masukkan kode sparepart: ";
  getline(cin, sparepart.kode);

  if (sparepart.kode.empty() || sparepart.kode == " ") {
    cout << "Kode sparepart tidak boleh kosong" << endl;
    return;
  }

  // Check Apakah Ada Sparepart dengan Kode yang sama
  if (cariKode(daftarSparepart, sparepart.kode) != -1) {
    cout << "Kode Sparepart sudah ada." << endl;
    return;
  }

  cout << "Masukkan Nama Sparepart: ";
  getline(cin, sparepart.nama);

  cout << "Masukkan Satuan Sparepart: ";
  getline(cin, sparepart.satuan);

  cout << "Masukkan Jumlah Sparepart: ";
  cin >> sparepart.jumlah;

  cout << "Masukkan Harga Sparepart: ";
  cin >> sparepart.harga;

  // Hitung Total Harga (harga * jumlah)
  sparepart.totalHarga = sparepart.harga * sparepart.jumlah;

  cout << "Masukkan Total Barang Sparepart: ";
  cin >> sparepart.totalBarang;

  daftarSparepart.push_back(sparepart);
}

void editSparepart(vector<Sparepart> &daftarSparepart) {
  if (daftarSparepart.size() < 1) {
    cout << "Daftar Sparepart masih kosong." << endl;
    return;
  }

  string inputKode;
  cout << "Masukkan kode Sparepart yang akan diedit: ";
  getline(cin, inputKode);
  int index = cariKode(daftarSparepart, inputKode);

  if (inputKode.empty() || inputKode == " ") {
    cout << "Kode sparepart tidak boleh kosong" << endl;
    return;
  }


  if (index == -1) {
    cout << "Kode Sparepart tidak ada." << endl;
    return;
  }

cout << "Masukkan Nama Sparepart: ";
  getline(cin, daftarSparepart[index].nama);

  cout << "Masukkan Satuan Sparepart: ";
  getline(cin, daftarSparepart[index].satuan);

  cout << "Masukkan Jumlah Sparepart: ";
  cin >> daftarSparepart[index].jumlah;

  cout << "Masukkan Harga Sparepart: ";
  cin >> daftarSparepart[index].harga;

  // Hitung Total Harga (harga * jumlah)
  daftarSparepart[index].totalHarga = daftarSparepart[index].harga * daftarSparepart[index].jumlah;

  cout << "Masukkan Total Barang Sparepart: ";
  cin >> daftarSparepart[index].totalBarang;

  cout << "Sparepart dengan kode " << inputKode << " telah berhasil diedit." << endl;
}

void deleteSparepart(vector<Sparepart> &daftarSparepart) {
  if (daftarSparepart.size() < 1) {
    cout << "Daftar Sparepart masih kosong." << endl;
    return;
  }

  string inputKode;
  cout << "Masukkan kode Sparepart yang akan dihapus: ";
  getline(cin, inputKode);
  int index = cariKode(daftarSparepart, inputKode);

  if (inputKode.empty() || inputKode == " ") {
    cout << "Kode sparepart tidak boleh kosong" << endl;
    return;
  }

  if (index == -1) {
    cout << "Kode Sparepart tidak ada." << endl;
    return;
  }

  daftarSparepart.erase(daftarSparepart.begin() + index);
  cout << "Sparepart berhasil dihapus." << endl;
  return;
}



void viewSparepart(vector<Sparepart> &daftarSparepart) {
  if (daftarSparepart.size() < 1) {
    cout << "Daftar Sparepart masih kosong." << endl;
    return;
  }

  for (int i =0; i < daftarSparepart.size(); i++) {
    cout << endl;
    cout << "===================" << endl;
    cout << "Sparepart ke " << i + 1 << endl;
    cout << "Kode : " << daftarSparepart[i].kode << endl;
    cout << "Nama : " << daftarSparepart[i].nama << endl;
    cout << "Satuan : " << daftarSparepart[i].satuan << endl;
    cout << "Jumlah : " << daftarSparepart[i].jumlah << endl;
    cout << "Harga : " << daftarSparepart[i].harga << endl;
    cout << "Total Harga : " << daftarSparepart[i].totalHarga << endl;
    cout << "Total Barang : " << daftarSparepart[i].totalBarang << endl;
  }
}

int main() {


  int pilihan;
  vector<Sparepart> sparepartList;

  while(true) {
    cout << endl;
    cout << "===============================" << endl;
    cout << "Program Pendataan Sparepart" << endl;
    cout << "1. Input Sparepart" << endl;
    cout << "2. Edit Sparepart" << endl;
    cout << "3. Hapus Sparepart" << endl;
    cout << "4. Laporan Data Sparepart" << endl;
    cout << "5. Keluar program" << endl;
    cout << "Pilih [1-5]: ";
    cin >> pilihan;
    cin.ignore();

    switch (pilihan)
    {
    case 1:
      inputSparepart(sparepartList);
      break;
    case 2:
      editSparepart(sparepartList);
      break;
    case 3:
      deleteSparepart(sparepartList);
      break;
    case 4:
      viewSparepart(sparepartList);
      break;
    case 5:
      return 0;
    default:
    cout << "Pilihan Tidak Valid" << endl;
      break;
    }
  }


  // Soal 2a
  // int n = 0, ganjil = 0, genap = 0;
  // cout << "Masukkan jumlah urutan data : ";
  // cin >> n;
  // cout << "Data: "; 
  // hitungGanjilGenap(n, ganjil, genap);

  // cout << endl;
  // cout << "Jumlah Bilangan Ganjil: " << ganjil << endl;
  // cout << "Jumlah Bilangan Genap: " << genap << endl;

  // Soal 2b
  // cout << "Jumlah(3,4)" << endl;
  // cout << "Jumlah Bilangan: " << jumlah(3,4) << endl;
  
  // cout << "Jumlah(4,6)" << endl;
  // cout << "Jumlah Bilangan: " << jumlah(4,6) << endl;


  return 0;
}