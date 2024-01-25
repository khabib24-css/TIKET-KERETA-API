#include <iostream>
#include <string>
#include "../Database/DatabaseKereta.h"

using namespace std;

void mAddKereta(string inpNamaKereta,char inpGerbong){
    namaKereta[nKereta] = inpNamaKereta;
    gerbong[nKereta] = inpGerbong;
    nKereta++;
}

void mViewKereta(){
    cout << "Status Kereta"<< endl;
    for (int i = 0;i < nKereta;i++){
        cout << "Nama Kereta :"<<namaKereta[i]<<endl;
        cout << "Gerbong :"<<gerbong[i]<<endl;
        cout << "------------------------------------------\n";
    }
}

int mSearchKereta(string inpNamaKereta){
    int index = -1;
    for (int i = 0; i < nKereta;i++){
        if (namaKereta[i] == inpNamaKereta){
            index = i;
            break;
        }
    }
    return index;
}