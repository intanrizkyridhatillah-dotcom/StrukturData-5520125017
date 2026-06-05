#include <iostream>
#include <string>
using namespace std;

struct Tanggal {
    int hari;
    string bulan;
    int tahun;
};

struct Alamat {
    string jalan;
    string kota;
};

struct Karyawan {
    string nama;
    int gaji;
    Tanggal tgl;
    Alamat almt;
};

int main () {
    const int n = 2; 
    Karyawan m1[n];

    cout << "=== Input Data Karyawan ===" << endl;

    for(int i = 0; i < n; i++) {
        cout << "\nData ke-" << i+1 << endl;
        cin.ignore(); // buang newline sebelum getline

        cout << "Nama            : ";
        getline(cin, m1[i].nama);

        cout << "Gaji            : ";
        cin >> m1[i].gaji;
        cin.ignore();

        cout << "Alamat Jalan    : ";
        getline(cin, m1[i].almt.jalan);

        cout << "Alamat Kota     : ";
        getline(cin, m1[i].almt.kota);

        cout << "Tanggal Masuk   :" << endl;
        cout << "  Hari (angka)  : ";
        cin >> m1[i].tgl.hari;
        cin.ignore();

        cout << "  Bulan         : ";
        getline(cin, m1[i].tgl.bulan);

        cout << "  Tahun         : ";
        cin >> m1[i].tgl.tahun;
    }

    cout << "\n=== Output Data Karyawan ===\n";
    for(int i = 0; i < n; i++) {
        cout << "-----------------------------------" << endl;
        cout << "Nama Karyawan   : " << m1[i].nama << endl;
        cout << "Tanggal Masuk   : " << m1[i].tgl.hari << " "
             << m1[i].tgl.bulan << " " << m1[i].tgl.tahun << endl;
        cout << "Alamat          : " << m1[i].almt.jalan << ", " << m1[i].almt.kota << endl;
        cout << "Gaji Perbulan   : Rp. " << m1[i].gaji << endl;
    }
    cout << "-----------------------------------" << endl;

    return 0;
}

