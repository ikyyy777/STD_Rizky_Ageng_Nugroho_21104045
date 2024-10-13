#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// Deklarasi fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas);

// Fungsi untuk memasukkan data mahasiswa
void inputMahasiswa(Mahasiswa& mhs);

// Fungsi untuk menampilkan data mahasiswa
void tampilkanMahasiswa(const Mahasiswa& mhs);

int main() {
    const int MAX_MAHASISWA = 10;
    Mahasiswa mahasiswa[MAX_MAHASISWA];
    int jumlahMhs;

    cout << "Masukkan jumlah mahasiswa (maks 10): ";
    cin >> jumlahMhs;

    if (jumlahMhs > MAX_MAHASISWA) {
        cout << "Jumlah mahasiswa tidak boleh lebih dari 10." << endl;
        return 1;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlahMhs; ++i) {
        cout << "\nMahasiswa ke-" << i+1 << ":" << endl;
        inputMahasiswa(mahasiswa[i]);
        mahasiswa[i].nilaiAkhir = hitungNilaiAkhir(mahasiswa[i].uts, mahasiswa[i].uas, mahasiswa[i].tugas);
    }

    // Tampilkan data mahasiswa
    cout << "\nData mahasiswa:" << endl;
    for (int i = 0; i < jumlahMhs; ++i) {
        tampilkanMahasiswa(mahasiswa[i]);
    }

    return 0;
}

// Definisi fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

// Fungsi untuk memasukkan data mahasiswa
void inputMahasiswa(Mahasiswa& mhs) {
    cout << "Masukkan nama: ";
    cin.ignore(); // Menghilangkan karakter newline yang tertinggal di buffer
    getline(cin, mhs.nama);
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;
    cout << "Masukkan nilai UTS: ";
    cin >> mhs.uts;
    cout << "Masukkan nilai UAS: ";
    cin >> mhs.uas;
    cout << "Masukkan nilai tugas: ";
    cin >> mhs.tugas;
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanMahasiswa(const Mahasiswa& mhs) {
    cout << "\nNama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Nilai UTS: " << mhs.uts << endl;
    cout << "Nilai UAS: " << mhs.uas << endl;
    cout << "Nilai Tugas: " << mhs.tugas << endl;
    cout << "Nilai Akhir: " << mhs.nilaiAkhir << endl;
}
