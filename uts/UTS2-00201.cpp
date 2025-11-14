#include <iostream>
using namespace std;

int main() {

  cout << "FOR LOOP\n";
  for (int i = 5; i > 0; i--) 
  {
    for (int j = 10; j > (10 -i); j--) {
      cout << j << " ";
    }
    cout << endl;
  }
  
  cout << "\nWhile\n";

  int i = 5;
  while (i > 0)
  {
    int j = 10;
    while (j > (10 - i))
    {
      cout << j << " ";
      j--;
    }
    cout << endl;
    i--;
  }
  
  i = 5;
  cout << "\nDoWhile\n";
  do {
    int j = 10;
    do
    {
      cout << j << " ";
      j--;
    } while (j > (10 - i));
    cout << endl;
    i--;
  } while (i > 0);
  
  return 0;
}