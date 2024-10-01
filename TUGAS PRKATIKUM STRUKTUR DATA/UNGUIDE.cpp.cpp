//nomor 1
#include <iostream>

int main() {
    float bilangan1, bilangan2;

    // Menerima input dari pengguna
    std::cout << "Masukkan bilangan pertama: ";
    std::cin >> bilangan1;

    std::cout << "Masukkan bilangan kedua: ";
    std::cin >> bilangan2;

    // Melakukan operasi matematika
    float hasilPenjumlahan = bilangan1 + bilangan2;
    float hasilPengurangan = bilangan1 - bilangan2;
    float hasilPerkalian = bilangan1 * bilangan2;
    float hasilPembagian = bilangan1 / bilangan2;

    // Menampilkan hasil
    std::cout << "Hasil penjumlahan: " << hasilPenjumlahan << std::endl;
    std::cout << "Hasil pengurangan: " << hasilPengurangan << std::endl;
    std::cout << "Hasil perkalian: " << hasilPerkalian << std::endl;
    std::cout << "Hasil pembagian: " << hasilPembagian << std::endl;

    return 0;
}

//nomor2
#include <iostream>
using namespace std;

// Fungsi untuk mengonversi angka menjadi teks
string angkaKeTeks(int angka) {
    string satuan[] = {"", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "sepuluh", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    if (angka < 10) {
        return satuan[angka];
    } else if (angka < 20) {
        return belasan[angka - 10];
    } else {
        return puluhan[angka / 10] + " " + satuan[angka % 10];
    }
}

int main() {
    int inputAngka;
    cout << "Masukkan angka (0-100): ";
    cin >> inputAngka;

    if (inputAngka < 0 || inputAngka > 100) {
        cout << "Angka harus antara 0 hingga 100." << endl;
    } else {
        cout << "Angka " << inputAngka << " dalam bentuk teks: " << angkaKeTeks(inputAngka) << endl;
    }

    return 0;
}

//nomor 3
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Masukkan bilangan bulat positif: ";
    cin >> n;

    int awal = n, akhir = n;

    for (int i = 1; i <= n; i++) {
        for (int j = awal; j >= 1; j--) {
            cout << j;
        }
        cout << "*";
        for (int k = 1; k <= akhir; k++) {
            cout << k;
        }
        cout << endl;
        awal--;
        akhir--;
    }

    cout << "*";

    return 0;
}
