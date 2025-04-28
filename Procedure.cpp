#include <iostream>
using namespace std;

class Hewan
{
private:
    string jenisKelamin;

public:
    string tipe;
    string umur;

    void InputData()
    {
        cout << "Masukkan jenis kelamin hewan: ";
        cin >> jenisKelamin;
        cout << "Masukkan tipe hewan: ";
        cin >> tipe;
        cout << "Masukkan umur hewan: ";
        cin >> umur;
    }
    void TampilHewan()
    {
        cout << "Jenis kelaminnya adalah: " << jenisKelamin << endl;
    }
};

int main()
{
    Hewan Animal;
    Animal.InputData();
    cout << endl;
    Animal.TampilHewan();
    cout << "Tipenya adalah: " << Animal.tipe << endl;
    cout << "Umurnya adalah: " << Animal.umur << endl;
    cout << endl;
};