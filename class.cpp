#include <iostream>
using namespace std;

class Mobil 
{
    public:
    string nama_mobil;
    string tipe_mobil;

    private:
    int harga_mobil;

    public:
    void inputdata()
    {
        cout << "Masukkan Nama Mobil = ";
        cin >> nama_mobil;
        cout << "Masukkan Tipe Mobil = ";
        cin >> tipe_mobil;
        cout << "Masukkkan Harga Mobil = ";
        cin >> harga_mobil;

    }
    
    void output_data()
    {
        cout << "Harga Mobil = " << harga_mobil << endl;
    }
};

int main()
{
    Mobil zaki;
    zaki.inputdata();
    cout << "Nama Mobil = " << zaki.nama_mobil << endl;
    cout << "Tipe Mobil = " << zaki.tipe_mobil << endl;
}