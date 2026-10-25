#include <iostream>
#include <string>
using namespace std;

int main (){
    string nama;
    string statusKelulusan;
    double nilaiTugas ;
    double nilaiUTS ;
    double nilaiUAS ;
    double jumlahNilai;
    double nilaiAkhir;

    cout << "\n==========================================\n";
    cout << "\tKETENTUAN!";
    cout << "\nNilai Tugas Memiliki Bobot 30%";
    cout << "\nNilai Uts Memiliki Bobot 30%";
    cout << "\nNilai Uas Memiliki Bobot 40%";
    cout << "\nNilai Akhir Minimal 75 Dinyatakan LULUS";
    cout << "\nNilai Akhir Dibawah 75 Dinyatakan BELUM LULUS";
    cout << "\n==========================================\n";
  

    cout << "Nama Siswa: ";
    cin >> nama;

    do {
        cout << "Masukkan nilai tugas (0-100): ";
        cin >> nilaiTugas;
        if (nilaiTugas < 0 || nilaiTugas > 100) {
            cout << "Nilai tidak valid! Harus antara 0 sampai 100.\n";
        }
    } while (nilaiTugas < 0 || nilaiTugas > 100);

    do {
        cout << "Masukkan nilai UTS: ";
        cin >> nilaiUTS;
        if (nilaiUTS < 0 || nilaiUTS > 100) {
            cout << "Nilai tidak valid! Harus antara 0 sampai 100.\n";
        }
    } while (nilaiUTS < 0 || nilaiUTS > 100);

    do {
        cout << "Masukkan nilai UAS: ";
        cin >> nilaiUAS;
        if (nilaiUAS < 0 || nilaiUAS > 100) {
            cout << "Nilai tidak valid! Harus antara 0 sampai 100.\n";
        }
    } while (nilaiUAS < 0 || nilaiUAS > 100);

    nilaiAkhir = (nilaiTugas * 0.30) + (nilaiUTS * 0.30) + (nilaiUAS * 0.40);

     cout << "==========================================\n";
     cout << "\tHASIL PENILAIAN AKHIR";
     cout << "\n==========================================" << endl;
     cout << "NAMA  :" << nama << endl;
     cout << "NILAI AKHIR :" << nilaiAkhir << endl ;

      if (nilaiAkhir >= 75) {
        cout << "SELAMAT, KAMU LULUS! TINGKATKAN LAGI!" << endl;
      } else {
        cout << "Kamu Belum Lulus, Coba lagi ya. Semangat terus!" << endl ;
      }
      cout << "========================================="<< endl ;
 return 0 ;
 }
