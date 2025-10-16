/**
 * Buat Program Biaya Parkir untuk berbagai jenis kendaraan
 * 1. Motor/Sepeda/Sepeda Listrik/Tossa
 * biaya per jam Rp 3000, jika lebih dari 12 jam Rp 50.000
 * 
 * 2. Mobil
 * biaya per jam Rp 5000, jika lebih dari 12 jam Rp 75.000
 * 
 * 3. MiniTruck/Truck/Minibus/Bus
 * biaya per jam Rp 25.000, jika lebih dari 8 jam Rp 250.000
 */

 #include <iostream>
 using namespace std;

 void calculateBike(int hours, string vehicle) {
  int park_per_hours = 3000;

  cout << "Jenis kendaraan adalah " << vehicle << endl;
  if (hours > 12) {
    cout << "Biaya Parkir nya adalah " << 50000;
    return;
  }

  cout << "Biaya Parkir nya adalah " << park_per_hours * hours;
  
 }

 void calculateCar(int hours, string vehicle) {
    int park_per_hours = 5000;

  cout << "Jenis kendaraan adalah " << vehicle << endl;
  if (hours > 12) {
    cout << "Biaya Parkir nya adalah " << 75000;
    return;
  }

  cout << "Biaya Parkir nya adalah " << park_per_hours * hours;
 }

 void calculateTruck(int hours, string vehicle) {
    int park_per_hours = 25000;

  cout << "Jenis kendaraan adalah " << vehicle << endl;
  if (hours > 8) {
    cout << "Biaya Parkir nya adalah " << 250000;
    return;
  }

  cout << "Biaya Parkir nya adalah " << park_per_hours * hours;
 }

 int main() {
  string vehicle = "";
  int parking_hours = 0;

  cout << "Masukkan Jenis Kendaraan: ";
  cin >> vehicle;
  cout << "Lama Parkir adalah ";
  cin >> parking_hours;

  bool isBike = vehicle == "Motor" || vehicle == "Sepeda";
  bool isCar = vehicle == "Mobil";

  if (isBike) {
    calculateBike(parking_hours, vehicle);
    return 0;
  }

  if (isCar) {
    calculateCar(parking_hours, vehicle);
    return 0;
  }

  calculateTruck(parking_hours, vehicle);

  return 0;
 }
