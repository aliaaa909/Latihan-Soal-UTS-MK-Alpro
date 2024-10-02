#include <iostream>
using namespace std;

int main ()
{
    int gula = 3000;
    int uang = 25000;
    int tarif = 3000;
    int hargaGula, uangIbu, parkir;
    hargaGula = gula *= 5;

    cout << "kembalian ibu jika memberi 5 kilo gula dan bayar parkir adalah " << endl;
    cout << "harga 5 kilo gula = " ;
    cout << hargaGula << endl;
    cout << "tarif parkir = " ;
    cout << tarif << endl;
    cout << "Kembalian ibu = ";
    cout << uang - hargaGula - tarif << endl;

return 0;

}
