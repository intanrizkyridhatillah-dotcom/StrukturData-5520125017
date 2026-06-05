#include <iostream>

using namespace std;

struct Matakuliah{
	string kodeMK;
	string namaMK;
	int sks;
};

struct Mahasiswa{
	int npm;
	string nama;
	string kelas;
	
	struct Matakuliah krs;
};

int main() {
	Mahasiswa m1;
	
	m1.npm = 55201250;
	m1.nama = "Intan";
	m1.kelas = "IF A";
	m1.krs.kodeMK = "k25";
	m1.krs.namaMK = "Structur Data";
	m1.krs.sks = 2;
	
	cout<<"== Data Informasi == "<<endl;
	cout<<"Npm	: "<<m1.npm<<endl;
	cout<<"Nama 	: "<<m1.nama<<endl;
	cout<<"Kelas 	: "<<m1.kelas<<endl;
	cout<<"KodeMK 	: "<<m1.krs.kodeMK<<endl;
	cout<<"KodeMK 	: "<<m1.krs.namaMK<<endl;
}
