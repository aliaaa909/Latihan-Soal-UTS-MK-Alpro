#include <iostream>
#include <string>
using namespace std;

// Fungsi menghitung tunjangan berdasarkan gaji pokok
int hitungTunjangan(int gajiPokok) {
    if (gajiPokok >= 5000000) {
        return (20 * gajiPokok) / 100; // Tunjangan 20% untuk gaji di atas 5 juta
    } else {
        return (10 * gajiPokok) / 100; // Tunjangan 10% untuk gaji di bawah 5 juta
    }
}

// Fungsi menghitung pajak berdasarkan gaji pokok dan tunjangan
int hitungPajak(int gajiPokok, int tunjangan) {
    if (gajiPokok >= 5000000) {
        return (15 * (gajiPokok + tunjangan)) / 100; // Pajak 15% untuk gaji di atas 5 juta
    } else {
        return (5 * (gajiPokok + tunjangan)) / 100; // Pajak 5% untuk gaji di bawah 5 juta
    }
}

// Fungsi menghitung gaji bersih
int hitungGajiBersih(int gajiPokok, int tunjangan, int pajak) {
    return (gajiPokok + tunjangan) - pajak;
}

int main() {
    string namaKaryawan;
    int gajiPokok, tunjangan, pajak, gajiBersih;

    // Input nama karyawan
    cout << "Masukkan nama karyawan: ";
    getline(cin, namaKaryawan);

    // Perulangan untuk memastikan input gaji pokok lebih dari 100000
    do {
        cout << "Masukkan gaji pokok (harus bilangan positif lebih dari 100000): ";
        cin >> gajiPokok;

        if (gajiPokok <= 100000) {
            cout << "Error: Gaji pokok harus lebih dari 100000 dan bilangan positif." << endl;
        }
    } while (gajiPokok <= 100000);

    // Menghitung tunjangan dan pajak
    tunjangan = hitungTunjangan(gajiPokok);
    pajak = hitungPajak(gajiPokok, tunjangan);

    // Menghitung gaji bersih
    gajiBersih = hitungGajiBersih(gajiPokok, tunjangan, pajak);

    // Output hasil
    cout << "\nNama Karyawan: " << namaKaryawan << endl;
    cout << "Gaji Pokok: " << gajiPokok << endl;
    cout << "Tunjangan: " << tunjangan << endl;
    cout << "Pajak: " << pajak << endl;
    cout << "Gaji Bersih: " << gajiBersih << endl;

    return 0;
}
