#include <iostream>
#include <iomanip>
#include <map>
#include <string>
using namespace std;

const int WIDTH = 30;
void formatLabel(const string &label, const bool enter = false) {
  if (enter) {
    cout << setw(WIDTH) << label << " : " << endl;
    return;
  }
    cout << setw(WIDTH) << label << " : ";
}

void formatLabelWithValue(const string &label, const string &value = "") {
    cout << setw(WIDTH) << label << " : " << value <<  endl;
}

string formatCurrency(const int &input) {
  return "Rp. " + to_string(input) + ",00";
}

void formatLabelWithValueDouble(const string &label, const int &value = 0) {
    // cout << setw(WIDTH) << label  << " : " << formatCurrency(value) <<  endl;
    cout << setw(WIDTH) << label  << " : " << value <<  endl;
}

int main() {
  int jumlah_mobil, total_harga_mobil = 0;
  string nama_pembeli, langganan;

  map<string, string> mappedCars = {
    {"Avanza", "MPV"},
    {"Altis", "Sedan"}
  };

  
  
  cout << left;
  cout << "PROGRAM PENYEWAAN/RENTAL MOBIL";
  cout << "\n=============================\n";

  formatLabel("Jumlah Mobil yang diSewa");
  // cin jumlah mobil;
  cin >> jumlah_mobil;

  formatLabel("Nama Pembeli");
  // cin nama
  cin >> nama_pembeli;


  formatLabel("Apakah Pembeli Langganan [Y/T]");
  // cin langganan
  cin >> langganan;


  cout << "----------------------\n";

  for (int i = 1; i <= jumlah_mobil; i++) {
    string namaMobil, jenisMobil, tahunProduksi;
    int hargaSewa = 0, lamaSewa = 0, totalHargaSewa = 0, totalAfterDiskon = 0;

    cout << "Mobil ke " << i << endl;
    formatLabel("Nama Mobil");
    // cin Nama Mobil
    cin >> namaMobil;

    formatLabel("Jenis Mobil");
    // cin jenis mobil
    if (mappedCars.count(namaMobil) > 0) {
      jenisMobil = mappedCars[namaMobil];
      cout << jenisMobil << endl;
    } else {
      cin >> jenisMobil;
    }

    formatLabel("Tahun Produksi");
    // cin tahun
    cin >> tahunProduksi;
    
    formatLabelWithValue("Satuan", "Unit");
    formatLabel("Harga Sewa/Hari");
    cin >> hargaSewa;


    formatLabel("Lama Sewa");
    cin >> lamaSewa;
    // cin Lama Sewa;

    totalHargaSewa = hargaSewa * lamaSewa; 
    formatLabelWithValueDouble("Total Harga Sewa", totalHargaSewa);

    float diskonPersen = 0;

    if (langganan == "Y") {
      diskonPersen = 0.1;
    }

    int totalDiskon = diskonPersen * totalHargaSewa;
    formatLabelWithValueDouble("Diskon 10%", totalDiskon);

    totalAfterDiskon = totalHargaSewa - totalDiskon;
    formatLabelWithValueDouble("Total Setelah Diskon", totalAfterDiskon);

    total_harga_mobil += totalAfterDiskon;
  
    cout << "----------------------\n";


  }

  cout << "\n=============================\n";
  formatLabelWithValue("Nama Pembeli", nama_pembeli);
  formatLabelWithValue("Langganan", langganan);
  formatLabelWithValueDouble("Jumlah Mobil", jumlah_mobil);
  formatLabelWithValueDouble("Total Harga Mobil", total_harga_mobil);


  int pajak = 0.1 * total_harga_mobil;
  formatLabelWithValueDouble("Pajak 10%", pajak);

  int totalAkhir = total_harga_mobil + pajak;
  formatLabelWithValueDouble("Total Akhir", totalAkhir);

  string bonus = totalAkhir > 2500000 ? "Sarung Cover Mobil" : "TISSUE KABIN";


  formatLabelWithValue("Bonus", bonus);
  cout << "=============================\n";
  return 0;
}