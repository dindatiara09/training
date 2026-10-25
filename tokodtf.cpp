#include <iostream>
using namespace std;

int main(){
    int beliTV, beliLaptop, beliSmartphone, beliRiceCooker;
    int jumlahBarang = 0;

    long long hargaTV= 5000000; 
    long long hargaLaptop = 7000000;
    long long hargaSmartphone = 4000000;
    long long hargaRiceCooker = 400000;

    long long totalHarga = 0;
    long long hargaTermahal = 0;
    long long diskon = 0; 
    long long totalBayar = 0;

    cout << "=================================================\n";
    cout << "\tSELAMAT DATANG DI TOKO DTF";
    cout << "\n=================================================" << endl;

    cout << "\tBarang apa yang ingin kamu beli" << endl;
    cout << "Daftar barang yang tersedia:" << endl;
    cout << "----------------------------------------" << endl;
    cout << "1. TV (Rp. 5.000.000)" << endl;
    cout << "2. Laptop (Rp. 7.000.000)" << endl;
    cout << "3. Smartphone (Rp. 4.000.000)" << endl;
    cout << "4. Rice Cooker (Rp. 400.000)" << endl;
    cout << "----------------------------------------" << endl;

    cout << "Masukkan jumlah yang ingin dibeli: \n";

    
     cout << "jumlah tv:";
        cin >> beliTV;
     cout << "jumlah laptop:";
        cin >> beliLaptop;
     cout << "jumlah smartphone:";
        cin >> beliSmartphone;
     cout << "jumlah rice cooker:";
        cin >> beliRiceCooker;
         
        if (beliTV > 0) {
            totalHarga += beliTV * hargaTV;
            jumlahBarang += beliTV;
        }
        if (beliLaptop > 0) {
            totalHarga += beliLaptop * hargaLaptop;
            jumlahBarang += beliLaptop;
        }
        if (beliSmartphone > 0) {
            totalHarga += beliSmartphone * hargaSmartphone;
            jumlahBarang += beliSmartphone;
        }
        if (beliRiceCooker > 0) {
            totalHarga += beliRiceCooker * hargaRiceCooker;
            jumlahBarang += beliRiceCooker;
        }

    
          if (beliTV > 0 && hargaTV > hargaTermahal) {
             hargaTermahal = hargaTV;
          }
          if (beliLaptop > 0 && hargaLaptop > hargaTermahal) {
            hargaTermahal = hargaLaptop;
          }
          if (beliSmartphone > 0 && hargaSmartphone > hargaTermahal) {
            hargaTermahal = hargaSmartphone;
          }
          if (beliRiceCooker > 0 && hargaRiceCooker > hargaTermahal) {
            hargaTermahal = hargaRiceCooker;
          }
           if (jumlahBarang > 1){
            diskon = hargaTermahal * 2.0 /100;
            cout << "SELAMAT! KAMU MENDAPATKAN DISKON" << endl;
          } else {
            diskon = 0;
            cout << "Kamu tidak mendapatkan diskon" << endl;
          }
             totalBayar = totalHarga - diskon;

                cout << "\n======STRUK BELANJA TOKO DTF======\n";
                cout << "jumlah barang yang dibeli:" << jumlahBarang << endl;
                cout << "total harga: Rp. " << totalHarga << endl;
                cout << "diskon: Rp. " << diskon << endl;
                cout << "total bayar: Rp. " << totalBayar << endl;

    return 0 ;
    }
    