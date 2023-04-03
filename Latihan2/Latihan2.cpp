#include <iostream>
using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};

struct Mahasiswa
{
	string NIM;
	string nama;
	AlamatDetail alamat;
	int umur;
};


int main() {
	Mahasiswa mhs;

	cout << "Masukan NIM :";
	cin >> mhs.NIM;
	cout << "masukan nama :";
	cin >> mhs.nama;
	cout << "Alamat :";
	cout << "\n\tMasukan desa:";
	cin >> mhs.alamat.desa;
	cout << "\tMasukan kota :";
	cin >> mhs.alamat.kota;
	cout << "masukan umur :";
	cin >> mhs.umur;

	cout << "\n\nNIm = " << mhs.NIM;
	cout << "\nNama = " << mhs.nama;
	cout << "\nDesa = " << mhs.alamat.desa;
	cout << "\nKota = " << mhs.alamat.kota;
	cout << "\nUmur = " << mhs.umur;
}