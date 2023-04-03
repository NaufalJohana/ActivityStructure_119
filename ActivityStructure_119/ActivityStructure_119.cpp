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
	mhs1.umur = 18;

	cout << "Masukan NIM :";
	cin >> mhs2.NIM;
	cout << "MAsukan nama :";
	cin >> mhs2.nama;
	cout << "Masukan Alamat :";
	cin >> mhs2.alamat;
	cout << "Masukan umur :";
	cin >> mhs2.umur;

}
