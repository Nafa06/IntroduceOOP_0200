#include <iostream>
using namespace std;

class Lingkaran
{
public:
    double jarijari;
    double luasLingkaran;

    void InputData()
    {
        cout << "Masukkan jari-jari: ";
        cin >> jarijari;
    }
    double HitungLuas()
    {
        return 3.14 * jarijari * jarijari;
    }
};

int main()
{
    Lingkaran Bulet;
    Bulet.InputData();
    cout << endl;
    cout << "Luas lingkarannya adalah: " << Bulet.HitungLuas() << endl;
    cout << endl;
};