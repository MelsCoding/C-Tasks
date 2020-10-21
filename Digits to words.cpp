#include <iostream>
#include <string>
using namespace std;

int main() {
  char a;
  cout << "a = ?" << endl;
  cin >> a;
  if ((int)a >= 48 && (int)a <=57){
    
    int n = a - '0';
  
    switch (n) {
      case 0: cout << "Zero";
      case 1: cout << "One" << endl;
      break;
      case 2 : cout << "Two";
      break;
      case 3 : cout << "Three";
      break;
      case 4 : cout << "Four";
      break;
      case 5 : cout << "Five";
      break;
      case 6 : cout << "Six";
      break;
      case 7 : cout << "Seven";
      break;
      case 8 : cout << "Eight";
      break;
      case 9 : cout << "Nine";
      break;
    }
  }else{
     cout << "Not a digit" << endl;
    
  }
  return 0;

}
