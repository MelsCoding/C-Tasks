#include <iostream>
using namespace std;

int main() {
  cout << "Month = ?" << endl;
  int m;
  cin >> m;
  cout << "Year = ?" << endl;
  int year;
  cin >> year;
  if ((year%400==0) || (year%4==0 && year%100!=0)){
    switch (m){
      case 1: cout << "31" << endl;
      break;
      case 2: cout << "29" << endl;
      break;
      case 3: cout << "31" << endl;
      break;
      case 4: cout << "30" << endl;
      break;
      case 5: cout << "31" << endl;
      break;
      case 6: cout << "30" << endl;
      break;
      case 7: cout << "31" << endl;
      break;
      case 8: cout << "31" << endl;
      break;
      case 9: cout << "30" << endl;
      break;
      case 10: cout << "31" << endl;
      break;
      case 11: cout << "30" << endl;
      break;
      case 12: cout << "31" << endl;
      break;
    }
  }else {
     switch (m){
      case 1: cout << "31" << endl;
      break;
      case 2: cout << "28" << endl;
      break;
      case 3: cout << "31" << endl;
      break;
      case 4: cout << "30" << endl;
      break;
      case 5: cout << "31" << endl;
      break;
      case 6: cout << "30" << endl;
      break;
      case 7: cout << "31" << endl;
      break;
      case 8: cout << "31" << endl;
      break;
      case 9: cout << "30" << endl;
      break;
      case 10: cout << "31" << endl;
      break;
      case 11: cout << "30" << endl;
      break;
      case 12: cout << "31" << endl;
      break;
    }
  }
  return 0;
}
