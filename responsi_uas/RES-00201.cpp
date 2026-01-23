#include <iostream>
#include <vector>
using namespace std;

struct Buku {
  string kode;
  string judul;
  string penulis;
  int tahun;
  int jumlah;
  int harga;
};

void hitungGenapGanjil(int n, int &genap, int &ganjil) {
  if (n == 0) return;

  if (n % 2 == 0) {
    genap++;
  }

  if (n % 2 != 0) {
    ganjil++;
  }

  hitungGenapGanjil(n-1, genap, ganjil);
  cout << n << " ";
}

int tambah(int a, int b) {
  if (b <= 0) return a;

  return 1 + tambah(a, b - 1);
}

int cariKode(vector<Buku> &inputBuku, string kode) {
  for (int i = 0; i < inputBuku.size(); i++ ) {
    if (kode == inputBuku[i].kode) return i;
  }

  return -1;
};

void inputBuku(vector<Buku> &inputBuku) {
  Buku b;

  cout << "Masukkan Kode Buku: ";
  getline(cin, b.kode);

  if (b.kode.empty() || b.kode == " ") {
    cout << "Kode tidak boleh kosong" << endl;
    return;
  }

  if (cariKode(inputBuku, b.kode) != -1) {
    cout << "Kode Buku sudah ada" << endl;
    return;
  }

  cout << "Masukkan Judul Buku: ";
  getline(cin, b.judul);

  cout << "Masukkan Penulis Buku: ";
  getline(cin, b.penulis);

  cout << "Masukkan Tahun Buku: ";
  cin >> b.tahun;

  cout << "Masukkan Jumlah Buku: ";
  cin >> b.jumlah;

  cout << "Masukkan Harga Buku: ";
  cin >> b.harga;

  inputBuku.push_back(b);
}

void editBuku(vector<Buku> &inputBuku) {
  string kode;
  cout << "Masukkan Kode Buku yg akan diedit: ";
  getline(cin, kode);
  int index = cariKode(inputBuku, kode);

  if (index == -1) {
    cout << "Buku dengan kode " << kode << " tidak ada" << endl;
    return;
  }

  cout << "Masukkan Judul Buku: ";
  getline(cin, inputBuku[index].judul);

  cout << "Masukkan Penulis Buku: ";
  getline(cin, inputBuku[index].penulis);

  cout << "Masukkan Tahun Buku: ";
  cin >> inputBuku[index].tahun;

  cout << "Masukkan Jumlah Buku: ";
  cin >> inputBuku[index].jumlah;

  cout << "Masukkan Harga Buku: ";
  cin >> inputBuku[index].harga;

  cout << "Edit Buku dengan kode " << kode << " berhasil" << endl;
}

void hapusBuku(vector<Buku> &inputBuku) {
  string kode;
  cout << "Masukkan Kode Buku yg akan dihapus: ";
  cin >> kode;
  int index = cariKode(inputBuku, kode);

  if (index == -1) {
    cout << "Buku dengan kode " << kode << " tidak ada" << endl;
    return;
  }

  inputBuku.erase(inputBuku.begin() + index);
  cout << "Hapus Buku dengan kode " << kode << " berhasil" << endl;
}

void laporanBuku(vector<Buku> &inputBuku) {
  if (inputBuku.empty()) {
    cout << "Daftar Buku Masih Kosong" << endl;
    return;
  }


  cout << "Laporan Daftar Buku" << endl;
  for (int i = 0; i < inputBuku.size(); i++) {
    cout << endl;
    cout << "Buku ke " << i+1 << endl;
    cout << "Kode Buku: " << inputBuku[i].kode << endl;
    cout << "Judul Buku: " << inputBuku[i].judul << endl;
    cout << "Penulis Buku: " << inputBuku[i].penulis << endl;
    cout << "Tahun Buku: " << inputBuku[i].tahun << endl;
    cout << "Jumlah Buku: " << inputBuku[i].jumlah << endl;
    cout << "Harga Buku: " << inputBuku[i].harga << endl;
    cout << "Total Harga Buku: " << inputBuku[i].jumlah * inputBuku[i].harga << endl;
  }
}




int main() {

  int pilihan;
  vector<Buku> daftarBuku;

  while (true) {
    cout << "\n=====================\n";
    cout << "Menu Pilihan: " << endl;
    cout << "1. Input Buku" << endl;
    cout << "2. Edit Buku" << endl;
    cout << "3. Hapus Buku" << endl;
    cout << "4. Laporan Buku" << endl;
    cout << "5. Keluar Program" << endl;
    cout << "Pilih [1-5]: ";
    cin >> pilihan;
    cin.ignore();

    switch (pilihan) {
      case 1:
        inputBuku(daftarBuku);
        break;
      case 2:
        editBuku(daftarBuku);
        break;
      case 3:
        hapusBuku(daftarBuku);
        break;
      case 4:
        laporanBuku(daftarBuku);
        break;
      case 5:
        return 0;

    default:
      cout << "Pilihan Tidak Valid" << endl;
      break;
    }
  }


  // No 2
  //  2.1
  // int n = 0, jumlahGanjil = 0, jumlahGenap = 0;

  // cout << "Masukkan jumlah urutan data: ";
  // cin >> n;
  // cout << "Data : ";
  // hitungGenapGanjil(n, jumlahGenap, jumlahGanjil);

  // cout << endl;
  // cout << "Jumlah Genap: " << jumlahGenap << endl;
  // cout << "Jumlah Ganjil: " << jumlahGanjil << endl;

  // 2.2
  // int a, b;

  // cout << "Jumlah(3,4)" << endl;
  // cout << "Jumlah bilangan: " << tambah(3, 4);

  // cout << "Jumlah(10,7)" << endl;
  // cout << "Jumlah bilangan: " << tambah(10, 7);

  return 0;
}
