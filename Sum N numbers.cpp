#include <iostream>
using namespace std;
int main(){
  cout << "N = ?" << endl;
  int N;
  cin >> N;
  int n;
  int s = 0;
  for (int i =0; i<N; i++){
    cout << "Number " << i+1 << "?" << endl;
    cin >> n;
    s += n;
  }
  cout << "Sum: " << s;
  
  
  return 0;
}
