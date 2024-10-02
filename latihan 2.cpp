#include <iostream>
using namespace std;

//pokok lebih dr 5 juta
// tunjangan = 20% gaji pokok
// pajak = 15% pokok + tunjangan

//pokok < 5 juta
// tunjangan = 10% pokok
// pajak = 5% pokok ditambah tunjangan


int gajiBersih (int gajiPokok, int tunjangan , int pajak ) {
{
    return gajiPokok + tunjangan - pajak;
}

return 0;

}

int tunjangan (int gajiPokok ) {
{
    if (gajiPokok >= 5000000)
    {
        return 0.2* gajiPokok;
    } else {
    return 0.1* gajiPokok;
    }
}
}

int pajak (int gajiPokok , int tunjangan ) {
    if (gajiPokok >= 5000000)
{
        return ((gajiPokok += tunjangan) * (0.15 ));
    }else{
        return ((gajiPokok += tunjangan)* 0.05);
        }

}

int main () {
do {
string namaKaryawan;
int Bersih, GajiTunjangan, GajiPajak, gajiPokok;

    cout << "Masukkan gaji pokok anda : " ;
    cin >> gajiPokok;

    if (gajiPokok <= 100000) {
        cout << "Gaji pokok harus lebih dari 100000 dan bilangan positif. coba lagi" << endl;
    }
     while (gajiPokok > 100000);

    GajiTunjangan = tunjangan(gajiPokok);
    GajiPajak = pajak (gajiPokok , GajiTunjangan);
    Bersih = gajiBersih (gajiPokok,GajiTunjangan, GajiPajak);


    cout << "Tunjangan : "  << GajiTunjangan << endl;
    cout << "Pajak :  "  << GajiPajak << endl;
    cout << "Bersih : "  << Bersih << endl;


    return 0;
    }

