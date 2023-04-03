#include <iostream>
using namespace std;

struct mahasiswa
{
	string NIM;
	string nama;
	string alamat;
	int umur;
};


int main() {
	mahasiswa mhs1, mhs2;

	mhs1.NIM = "20220140119";
	mhs1.nama = "ananda naufal";
	mhs1.alamat = "Purworejo";
	mhs1.umur = 21;

	cout << "Masukan NIM :";
	cin >> mhs2.NIM;
	cout << "MAsukan nama :";
	cin >> mhs2.nama;
	cout << "Masukan Alamat :";
	cin >> mhs2.alamat;
	cout << "Masukan umur :";
	cin >> mhs2.umur;

	cout << "\nNIM = " << mhs1.NIM;
	cout << "\nNama = " << mhs1.nama;
	cout << "\nAlamat = " << mhs1.alamat;
	cout << "\nUmur = " << mhs1.umur;


	cout << "\n\nNim = " << mhs2.NIM;
	cout << "\nNama = " << mhs2.nama;
	cout << "\nAlamat = " << mhs2.alamat;
	cout << "\nUmur = " << mhs2.umur;


}

