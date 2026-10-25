#include <iostream>
#include <string>
using namespace std;

int main(){
    string namaBarang;
    int hargaSatuan;
    int totalBelanja = 0;
    int jumlahBarang;
    int subtotal;
    int diskon;
    int totalBayar;
    char pilihan;

     do {
        cout << "masukkan nama barang: ";
        cin >> namaBarang;
        cout << "masukkan harga satuan: ";
        cin >> hargaSatuan;
        cout << "masukkan jumlah barang: ";
        cin >> jumlahBarang;
        subtotal = hargaSatuan * jumlahBarang;
        totalBelanja += subtotal;

        cout << "Subtotal " << namaBarang << ": Rp" << subtotal << endl;
        cout << "Tambah barang lagi? (y/n):";
        cin >> pilihan;
     } while (pilihan == 'y' || pilihan == 'Y');
     
            if (totalBelanja >= 100000){
             cout << "pelanggan mendapat diskon 10%\n";
             diskon= totalBelanja * 0.10;
            } else {
             diskon = 0;
             cout << "pelangggan tidak memiliki diskon";
            }

            totalBayar = totalBelanja - diskon;

            cout << "\n";
            cout << "\t--------STRUK BELANJA--------" << endl;
            cout << "Total belanja: Rp" << totalBelanja << endl;
            cout << "diskon: Rp" << diskon << endl;
            cout << "Total bayar: Rp"  << totalBayar << endl;


 return 0;
}
     