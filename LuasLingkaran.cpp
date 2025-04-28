#include <iostream>
using namespace std;

class persegipanjang{
    private:
    int panjang;
    int lebar;
    int luas;

    public:
    void inputdata()
    {
        cout << "Masukkan panjang = ";
        cin >> panjang;
        cout << "Masukkan lebar = ";
        cin >> lebar;
    }
    
    void hitungluas()
    {
        luas = panjang * lebar;
    }

    void outputdata(){
        cout << "Tampilkan Luas = " << luas << endl;
    }
    
};

int main()
{
    persegipanjang zaki;
    zaki.inputdata();
    zaki.hitungluas();
    zaki.outputdata();
}
