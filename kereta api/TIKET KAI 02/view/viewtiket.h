//#include "../model/ModelJadwal.h"
// #include "../Database/DatabaseTiket.h"
//include "../view/viewjadwal.h"
#include "../model/ModelTiket.h"
#include <iostream>
#include <string>

using namespace std;

void vViewTiket(){
        mViewTiket();
}

void vSearchtiketTujuan(){
    vSearchJadwal();
    mTujuan();

}

void cetakTiket(int kodeTiket) {
    int index = mSearchJadwal(kodeTiket);
    if (index != -1) {
        cout << "========================================================\n"; 
        // cout << "Kode Tiket :"<<kodeTiket[index]<<endl;
        cout << "kode beli tiket :"<<kodeBeliTiket[i]<<endl;
        cout << "========================================================\n";
        cout << "Nama Kereta :"<<namaKereta[index]<<endl;
        cout << "Tanggal Keberangkatan :"<<tanggal[index]<<endl;
        cout << "Awal Stasiun :"<<start[index]<<endl;
        cout << "Tujuan Stasiun :" << tujuan[i] << endl;
        cout << "Kelas  :" << kelas[i] << endl;
        cout << "Harga :" << harga[i] << endl;
        cout << "Jumlah :" << jumlahTiket << endl;
        cout << "Total :" << total << endl;
        cout << "========================================================\n";
    } else {
        cout << "Kode Tiket tidak ditemukan." << endl;
    }
}










// void vSearchTiket(){
//     int index = mSearchJadwal(inpkodeTiket);
//     if (index != -1){
//         cout << "Kode Tiket :"<<kodeTiket[index]<<endl;
//         cout << "Nama Kereta :"<<namaKereta[index]<<endl;
//         cout << "Tanggal Keberangkatan :"<<tanggal[index]<<endl;
//         cout << "Awal Stasiun :"<<start[index]<<endl;
//         //cout << "Tujuan Stasiun :"<<tujuan[index]<<endl;
//         // cout << "Harga Tiket :"<<harga[index]<<endl;
//     }else{
//         cout << "Jadwal tidak ditemukan"<<endl;
//     }
// }