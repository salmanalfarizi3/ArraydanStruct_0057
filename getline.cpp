#include <iostream>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;

};

struct Orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main() {
        // Mengisi data
        Orang mhs;
        cout << "Mengisi Data" << endl;
        cout << "Nama : ";
        getline(cin, mhs.nama);
        cout << "desa : ";
        getline(cin, mhs.alamat.desa);
        