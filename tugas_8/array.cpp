#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
  cout << endl << "Hasil Array: ";
  for (int i =0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void printArrayReverse(int arr[], int n) {
  cout << endl << "Reverse Array: ";
  for (int i= n-1; i >= 0; i--) {
    cout << arr[i] << " ";
  }
}

void printArrayEven(int arr[], int n) {
  cout << endl << "Hasil Array Genap: ";
  for (int i =0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      cout << arr[i] << " ";
    }
  }
}

void printArrayEvenisPositive(int arr[], int n, bool isPositive) {
  string wording = isPositive ? "Positif: " : "Negatif: ";
  cout << endl << "Hasil Array Genap" << wording;
  for (int i =0; i < n; i++) {

    if(!isPositive && arr[i] < 0 && arr[i] % 2 == 0) {
      cout << arr[i] << " ";
    }

    if ( isPositive && arr[i] >=0 && arr[i] % 2 == 0) {
      cout << arr[i] << " ";
    }
  }
}

void printArrayOddisPositive(int arr[], int n, bool isPositive) {
    string wording = isPositive ? "Positif: " : "Negatif: ";
  cout << endl << "Hasil Array Ganjil" << wording;
  for (int i =0; i < n; i++) {

    if(!isPositive && arr[i] < 0 && arr[i] % 2 != 0) {
      cout << arr[i] << " ";
    }

    if ( isPositive && arr[i] >=0 && arr[i] % 2 != 0) {
      cout << arr[i] << " ";
    }
  }
}




void printArrayOdd(int arr[], int n) {
  cout << endl << "Hasil Array Ganjil: ";
  for (int i =0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      cout << arr[i] << " ";
    }
  }
}


void inputArr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
    cout << "Input ke-" << i + 1 << ": ";
    cin >> arr[i];
  }
}

void findMax(int arr[], int n) {
  int max = 0;
  cout << endl << "Nilai terbesar: ";
  for (int i =0; i < n; i++) {
    if (arr[i] >= max) {
      max = arr[i];
    }
  }
  cout << max;
}

void findMin(int arr[], int n) {
  int min = 0;
  cout << endl << "Nilai terkecil: ";
  for (int i =0; i < n; i++) {
    if (arr[i] <= min) {
      min = arr[i];
    }
  }
  cout << min;
}

int findSum(int arr[], int n) {
  int sum = 0;
  for (int i =0; i < n; i++) {
    sum += arr[i];
  }
  return sum;
}

void findAvg(int sum, int n) {
  float avg;

  avg = (float) sum / (float) n;
  cout << "Rata-rata: " << avg;
}


int main() {
  int n;
  
  cout << "Input n: ";
  cin >> n;

  int nums[n];

  // Kasus 1
  // inputArr(nums, n);
  // printArray(nums, n);

  // Kasus 2;
  // inputArr(nums, n);
  // printArray(nums, n);
  // printArrayReverse(nums, n);

  // Kasus 3
  // inputArr(nums, n);
  // printArray(nums, n);
  // findMax(nums, n);
  // findMin(nums, n);
  // int sum = findSum(nums, n);
  // cout << endl << "Jumlah Array: " << sum;
  // findAvg(sum, n);

  // Kasus 4
  // inputArr(nums, n);
  // printArrayEven(nums, n);
  // printArrayOdd(nums, n);
  
  // Kasus 5
  inputArr(nums, n);
  printArrayEvenisPositive(nums, n, true);
  printArrayEvenisPositive(nums, n, false);
  printArrayOddisPositive(nums, n, true);
  printArrayOddisPositive(nums, n, false);

  return 0;
}