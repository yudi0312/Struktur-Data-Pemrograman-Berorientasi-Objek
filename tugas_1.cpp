#include <iostream>
using namespace std;

class MHS {
  public:
  string MhsName;

  void printName() {
    cout << "Nama Mahasiswa: " << MhsName;
  }
};

int main() {
  MHS mhs1;
  mhs1.MhsName = "afin pujo ardi";
  mhs1.printName();
  return 0;
} 