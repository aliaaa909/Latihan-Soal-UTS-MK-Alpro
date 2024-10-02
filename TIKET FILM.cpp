#include <iostream>
#include <string>
using namespace std;

void tampilkanMenu() {
    cout << "KODE FILM \tNAMA FILM \t\tHARGA TIKET" << endl;
    cout << "1 \t\tArmagedon \t\tRp. 35.000" << endl;
    cout << "2 \t\tDisneyLand \t\tRp. 45.000" << endl;
    cout << "3 \t\tToyStory \t\tRp. 60.000" << endl;
}

int hitungTotalHarga(int kodeFilm, int jumlahTiket) {
    int hargaTiket = 0;

    // Menentukan harga tiket berdasarkan kode film
    if (kodeFilm == 1) {
        hargaTiket = 35000;
    } else if (kodeFilm == 2) {
        hargaTiket = 45000;
    } else if (kodeFilm == 3) {
        hargaTiket = 60000;
    }

    // Menghitung total harga tanpa diskon
    int totalHarga = hargaTiket * jumlahTiket;

    // Diskon 40% jika pembelian lebih dari 5 tiket
    if (jumlahTiket > 5) {
        totalHarga = totalHarga * 60 / 100; // Mengurangi 40% dari harga total
    }

    return totalHarga;
}

string namaFilm(int kodeFilm) {
    if (kodeFilm == 1) {
        return "Armagedon";
    } else if (kodeFilm == 2) {
        return "DisneyLand";
    } else if (kodeFilm == 3) {
        return "ToyStory";
    } else {
        return "Kode film tidak valid";
    }
}

int main() {
    int kodeFilm, jumlahTiket;
    char pilihanLagi;

    do {
        // Tampilkan menu
        tampilkanMenu();

        // Input kode film
        cout << "Masukkan kode film (1-3): ";
        cin >> kodeFilm;

        // Validasi kode film
        if (kodeFilm < 1 || kodeFilm > 3) {
            cout << "Kode film yang Anda tuliskan tidak valid." << endl;
            continue; // Ulangi perulangan jika kode film tidak valid
        }

        // Input jumlah tiket
        cout << "Masukkan jumlah pembelian: ";
        cin >> jumlahTiket;

        // Output detail pemesanan
        cout << "\n" << namaFilm(kodeFilm) << endl;
        int hargaSatuan = (kodeFilm == 1) ? 35000 : (kodeFilm == 2) ? 45000 : 60000;
        cout << "Harga Tiket Rp: " << hargaSatuan << endl;
        cout << "Jumlah pembelian: " << jumlahTiket << endl;

        // Hitung harga setelah diskon
        int totalHarga = hitungTotalHarga(kodeFilm, jumlahTiket);
        cout << "Harga setelah diskon: Rp " << totalHarga << endl;

        // Tanya apakah ingin memesan lagi
        cout << "\nApakah Anda ingin memesan tiket lagi? (Y/N): ";
        cin >> pilihanLagi;

    } while (pilihanLagi == 'Y' || pilihanLagi == 'y');

    cout << "\nTerimakasih sudah memesan tiket film!" << endl;

    return 0;
}
