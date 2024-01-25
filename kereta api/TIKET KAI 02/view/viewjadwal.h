#include "../model/ModelJadwal.h"
#include <iostream>
#include <string>

using namespace std;

void vAddJadwal(){
    string namaKeretaInput;
    string tanggalKeretaInput;
    string awalKeretaInput;
    // string tujuanKeretaInput;
    // int hargaTiketInput;

    cout << "Masukkan Nama Kereta :";
    getline(cin, namaKeretaInput);
    cout << "Tanggal :";
    getline(cin, tanggalKeretaInput);
    cout << "Awal Stasiun :";
    getline(cin, awalKeretaInput);
    // cout << "Tujuan Stasiun :";
    // getline(cin, tujuanKeretaInput);
    // cout << "Harga Tiket :";
    // cin  >> hargaTiketInput;
    mAddJadwal(namaKeretaInput,tanggalKeretaInput,awalKeretaInput);
}

void vViewjadwal(){
    mViewJadwal();
}

void vSearchJadwal(){
    int inpkodeTiket;
    cout << "Masukkan Kode Tiket :";
    cin  >> inpkodeTiket;
    int index = mSearchJadwal(inpkodeTiket);
    if (index != -1){
        cout << "Kode Tiket :"<<kodeTiket[index]<<endl;
        cout << "Nama Kereta :"<<namaKereta[index]<<endl;
        cout << "Tanggal Keberangkatan :"<<tanggal[index]<<endl;
        cout << "Awal Stasiun :"<<start[index]<<endl;
        //cout << "Tujuan Stasiun :"<<tujuan[index]<<endl;
        // cout << "Harga Tiket :"<<harga[index]<<endl;
    }else{
        cout << "Jadwal tidak ditemukan"<<endl;
    }
}

