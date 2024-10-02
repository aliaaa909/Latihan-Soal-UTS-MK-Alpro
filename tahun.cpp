#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk memeriksa apakah tahun kabisat
bool cekTahunKabisat(int tahun) {
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        return true;
    }
    return false;
}

// Fungsi untuk memeriksa apakah tanggal valid
bool cekTanggalValid(int tanggal, int bulan, int tahun) {
    if (bulan < 1 || bulan > 12) {
        return false;
    }

    // Jumlah hari dalam setiap bulan
    int hariDalamBulan[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Memeriksa apakah tahun kabisat dan bulan Februari
    if (cekTahunKabisat(tahun) && bulan == 2) {
        hariDalamBulan[1] = 29;
    }

    // Memeriksa apakah tanggal valid untuk bulan yang dipilih
    if (tanggal < 1 || tanggal > hariDalamBulan[bulan - 1]) {
        return false;
    }

    return true;
}

// Fungsi untuk memeriksa apakah bilangan komposit
bool cekKomposit(int n) {
    if (n < 4) {
        return false; // Bilangan 1, 2, dan 3 bukan bilangan komposit
    }
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return true;
        }
    }
    return false;
}

// Fungsi untuk menjumlahkan bilangan komposit pertama
int jumlahBilanganKomposit(int banyakElemen) {
    int jumlah = 0, count = 0, bilangan = 4; // Bilangan komposit dimulai dari 4

    while (count < banyakElemen) {
        if (cekKomposit(bilangan)) {
            jumlah += bilangan;
            count++;
        }
        bilangan++;
    }

    return jumlah;
}

int main() {
    string nama;
    int tanggal, bulan, tahun, banyakElemen;

    // Input nama pengguna
    cout << "Masukkan nama Anda: ";
    getline(cin, nama);

    // Input tanggal, bulan, tahun dan validasi
    do {
        cout << "Masukkan tanggal lahir (1-31): ";
        cin >> tanggal;
        cout << "Masukkan bulan lahir (1-12): ";
        cin >> bulan;
        cout << "Masukkan tahun lahir: ";
        cin >> tahun;

        if (!cekTanggalValid(tanggal, bulan, tahun)) {
            cout << "Tanggal, bulan, atau tahun tidak valid. Silakan coba lagi.\n";
        }

    } while (!cekTanggalValid(tanggal, bulan, tahun));

    // Input jumlah bilangan komposit yang ingin dijumlahkan
    cout << "Masukkan jumlah bilangan komposit yang ingin dijumlahkan: ";
    cin >> banyakElemen;

    // Menampilkan hasil
    int totalKomposit = jumlahBilanganKomposit(banyakElemen);
    cout << "Jumlah " << banyakElemen << " bilangan komposit pertama adalah: " << totalKomposit << endl;

    // Cek apakah tahun kabisat
    if (cekTahunKabisat(tahun)) {
        cout << "Tahun " << tahun << " adalah tahun kabisat." << endl;
    }

    // Ucapan terima kasih
    cout << "Terimakasih " << nama << " telah menggunakan aplikasi ini." << endl;

    return 0;
}
