#include "../Database/DatabaseJadwal.h"
#include <string>
#include <iostream>
// #include "../model/ModelKereta.h"
using namespace std;

void mAddJadwal(string namaKeretaJadwalInput,string tanggalInput,string startInput){
    int indexKereta = mSearchKereta(namaKeretaJadwalInput);
    // cout <<"indexKereta : "<<indexKereta<<endl;
    if (indexKereta != -1){
        kodeTiket[nJadwal] = nJadwal+1;
        namaKereta[nJadwal] = namaKeretaJadwalInput;
        tanggal[nJadwal] = tanggalInput;
        start[nJadwal] = startInput;
        //tujuan[nJadwal];
        // harga[nJadwal] = hargaInput;
        nJadwal++;
    }else {
        cout << "Kereta tidak ditemukan"<<endl;
    }
}

void mViewJadwal(){
    cout << "Daftar Jadwal"<<endl;
    cout << "========================================================\n";
    for (int i=0;i<nJadwal;i++){
        cout << "Kode Tiket :"<<kodeTiket[i]<<endl;
        cout << "Nama Kereta :"<<namaKereta[i]<<endl;
        cout << "Tanggal keberangkatan :"<<tanggal[i]<<endl;
        cout << "Awal Stasiun :"<<start[i]<<endl;
    cout << "========================================================\n";    
    }   
}

int mSearchJadwal(int kodeTiketInput){
    int index = -1;
    for (int i = 0; i < nJadwal; i++){
        if (kodeTiket[i] == kodeTiketInput){
            index = i;
        }
    }
    return index;
}