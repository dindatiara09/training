#include <iostream>
#include <string>
using namespace std;

int main (){
    char nama[50];
    int waktu = 1;
    int tarifPenyewaan= 200000;
    int totalSewa;

    cout << "========================================================\n";
    cout << "\tSelamat datang di studio musik Al Izzah!\n";
    cout << "========================================================\n";
    cout << "Siapa namamu?:";
    cin >> nama;
    cout << "berapa lama kamu ingin menyewa alat musik ini?:";
    cin >> waktu;
    if (waktu > 1 ){
        cout << "total sewa kamu adalah: " << tarifPenyewaan + (waktu - 1 ) * tarifPenyewaan * 0.25;
    } else if (waktu == 1){
        cout << "kamu hanya menyewa selama " << waktu << " jam, total sewa kamu adalah: " << tarifPenyewaan ;
    }
    cout << "\nTerima kasih " << nama << " telah menyewa alat musik di studio musik Al Izzah, semoga kamu puas dengan pelayanan kami!";
 return 0;
}