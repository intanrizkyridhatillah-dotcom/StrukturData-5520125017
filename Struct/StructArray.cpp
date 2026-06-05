#include <iostream>
using namespace std;

struct Mahasiswa {
    int npm;
    string nama;
    string kelas;
};

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    // Array dinamis
    Mahasiswa *mhs = new Mahasiswa[n];

    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i+1 << endl;
        cout << "NPM   : ";
        cin >> mhs[i].npm;
        cout << "Nama  : ";
        cin >> mhs[i].nama;
        cout << "Kelas : ";
        cin >> mhs[i].kelas;
    }

    cout << "\n=== Daftar Mahasiswa ===\n";
    for (int i = 0; i < n; i++) {
        cout << i+1 << ". " << mhs[i].nama
             << " | NPM: " << mhs[i].npm
             << " | Kelas: " << mhs[i].kelas << endl;
    }

    delete[] mhs;
    return 0;
}

