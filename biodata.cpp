#include <iostream>
using namespace std;

int main(){
    char nm[50],tmp[20],tgl[18],alm[50],tlp[50];

    cout << "\tBIODATA PRIBADI SAYA" << endl;
    cout << "======================================" << endl;
    cout << "\nNama Lengkap:" ; cin.getline (nm,50);
    cout << "\nKota Kelahiran:"; cin >> tmp;
    cout << "\nTanggal Lahir:"; cin >> tgl;
    cout << "\nAlamat:"; cin >> alm;
    cout << "\nNo. Telp:"; cin >> tlp ;
    cout << "\n======================================" << endl;
    cout << "\n";

    cout << "Perkenalkan nama saya " << nm << ", saya lahir di " << tmp << endl;
    cout << "Saya lahir pada tanggal " << tgl << ", alamat rumah saya " << alm << endl;
    cout << "Teman teman boleh menghubungi saya di No. Telp ini --> " << tlp << endl;
    cout << "Salam Persahabatan.....!!!" << endl;
 return 0;
}