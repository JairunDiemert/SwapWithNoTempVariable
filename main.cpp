#include <iostream>
using namespace std;

int main() {
  int A = 1133;
  int B = 1079;
  
  cout << "A: " << A << endl;
  cout << "B: " << B << endl << endl;
  A = A + B;
  
  cout << "A: " << A << endl;
  cout << "B: " << B << endl << endl;
  B = A - B;
  
  cout << "A: " << A << endl;
  cout << "B: " << B << endl << endl;
  A = A - B;
  
  cout << "A: " << A << endl;
  cout << "B: " << B << endl << endl;

}
