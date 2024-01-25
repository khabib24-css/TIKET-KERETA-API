#include <iostream>
#include <string>
#include "../model/ModelKereta.h"

using namespace std;

void vAddKereta(){
    string namaKeretaInput;
    char gerbongInput;
    cout << "Masukkan Nama Kereta :";
    cin  >> namaKeretaInput;
    cout << "Masukkan Gerbong Kereta (A, B, atau C) :";
    cin  >> gerbongInput;
        if (gerbongInput == 'A' || gerbongInput == 'a'){
            cout << gerbongInput;
        }else if (gerbongInput == 'B' || gerbongInput == 'b'){
            cout << gerbongInput;
        }else if(gerbongInput == 'C' || gerbongInput == 'c'){
            cout << gerbongInput;
        }else {
            cout << "Belom Tersedia";
        }
    mAddKereta(namaKeretaInput,gerbongInput);
}

void vViewKeretaa(){
    mViewKereta();
}

void vSearchKereta(){
    string namaKeretaInput;
    cout << "Masukkan Nama Kereta :";
    cin  >> namaKeretaInput;
    int index = mSearchKereta(namaKeretaInput);
    if (index != -1){
        cout << "Nama Kereta :"<<namaKereta[index]<<endl;
        cout << "Gerbong Kereta :"<<gerbong[index]<<endl;
    }else {
        cout << "Nama Kereta Tidak ditemukan"<< endl;
    }
}