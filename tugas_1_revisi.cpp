#include <iostream>
using namespace std;
class MHS {
private:
    string MHSname;
public:
    MHS(string name) {
        MHSname = name;
    }
    void setName(string name) {
        MHSname = name;
    }
    string getName() const {
        return MHSname;
    }
    void printName() const {
        cout << "MHS name is: " << MHSname << endl;
    }
};

int main() {
    MHS mhs1("Putu Yudi");
    mhs1.printName();
    MHS mhs2("Nandanjaya Wiraguna");
    mhs2.printName();
    cout << "MHS name access: " << mhs1.getName() << endl;
    return 0;
}