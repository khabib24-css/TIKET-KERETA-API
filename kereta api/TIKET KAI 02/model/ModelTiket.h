#include "../Database/DatabaseTiket.h"
#include <iostream>
#include <string>

using namespace std;

// void mInfor(){

// }

void mTujuan(){
    kodeBeliTiket[nTiket] = nTiket+1;
    // int indexTiket = mSearchJadwal();
    cout << "Masukkan Tujuan Staiun :";
        cin  >> tujuan[i];
        cout << "Tujuan Stasiun :"<<tujuan[i]<<endl;
    cout << "========================================================\n";
    if ((tujuan[i] == "kertosono")||(tujuan[i] == "KERTOSONO")){
            cout << "           Rincian Harga Tiket" << endl;
            cout << "" << endl;
            cout << "  No      sepanjang - kertosono            " << endl;
            cout << "____________________________________  " << endl;
            cout << "  1.    EKONOMI    [E] = 12.000         " << endl;
            cout << "  2.    BISNIS     [B] = 22.000        " << endl;
            cout << "  3.    EXECUTIVE  [X] = 50.000        " << endl;
            cout << "_____________________________________" << endl;
            cout << "" << endl;
            printf("Pilih Kelas kereta api (Ekonomi[E] / Bisnis[B] / eXecutive[X]) : ");
		    cin >> kelas [i];
		if ((kelas	[i] == "e")||(kelas [i] == "E")){
                harga[i] = 12000;
		        kelas 	[i] = " EKONOMI ";
                cout << "kelas = "<<kelas 	[i] << endl;
                cout << "Harga ="<< harga[i]<<endl;
                cout << "Masukkan Jumlah Tiket :";
                cin  >> jumlahTiket ;
                    for (int i = 0;i < jumlahTiket ;i++){
                        cout << " Masukkan nama ke- "<<i+1<<" : ";
		                cin  >> nama[i]; 
                    }
                total  = harga[i]*jumlahTiket;
                cout << "Total Harga :" << "Rp. "<<total<<endl;
                cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
                
                    // break;
        }else if ((kelas	[i] == "b")||(kelas [i] == "B")){
                harga[i] = 22000;
		        kelas 	[i] = " BISNIS ";
                cout << "kelas = "<<kelas 	[i] << endl;
                cout << "Harga ="<< harga[i]<<endl;
                cout << "Masukkan Jumlah Tiket :";
                cin  >> jumlahTiket ;
                    for (int i = 0;i < jumlahTiket ;i++){
                        cout << " Masukkan nama ke- "<<i+1<<" : ";
		                cin  >> nama[i]; 
                    }
                total  = harga[i]*jumlahTiket;
                cout << "Total Harga :" << "Rp. "<<total<<endl;
                cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
        }else if((kelas	[i] == "x")||(kelas [i] == "X")){
                harga[i] = 50000;
		        kelas 	[i] = " EXSEKUTIF ";
                cout << "kelas = "<<kelas 	[i] << endl;
                cout << "Harga ="<< harga[i]<<endl;
                cout << "Masukkan Jumlah Tiket :";
                cin  >> jumlahTiket ;
                    for (int i = 0;i < jumlahTiket ;i++){
                        cout << " Masukkan nama ke- "<<i+1<<" : ";
		                cin  >> nama[i]; 
                    }
                total  = harga[i]*jumlahTiket;
                cout << "Total Harga :" << "Rp. "<<total;
            }
            nTiket++;
    }else if ((tujuan[i] == "ngawi")||(tujuan[i] == "NGAWI")){
            cout << "           Rincian Harga Tiket" << endl;
            cout << "" << endl;
            cout << "  No      sepanjang - ngawi            " << endl;
            cout << "____________________________________  " << endl;
            cout << "  1.    EKONOMI    [E] = 30.000         " << endl;
            cout << "  2.    BISNIS     [B] = 60.000        " << endl;
            cout << "  3.    EXECUTIVE  [X] = 120.000        " << endl;
            cout << "_____________________________________" << endl;
            cout << "" << endl;
            printf("Pilih Kelas kereta api (Ekonomi[E] / Bisnis[B] / eXecutive[X]) : ");
		    cin >> kelas [i];
		        if ((kelas	[i] == "e")||(kelas [i] == "E")){
                harga[i] = 30000;
		        kelas 	[i] = " EKONOMI ";
                cout << "kelas = "<<kelas 	[i] << endl;
                cout << "Harga ="<< harga[i]<<endl;
                cout << "Masukkan Jumlah Tiket :";
                cin  >> jumlahTiket ;
                    for (int i = 0;i < jumlahTiket ;i++){
                        cout << " Masukkan nama ke- "<<i+1<<" : ";
		                cin  >> nama[i]; 
                    }
                total  = harga[i]*jumlahTiket;
                cout << "Total Harga :" << "Rp. "<<total<<endl;
                cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
                // break;
        }else if ((kelas	[i] == "b")||(kelas [i] == "B")){
                harga[i] = 60000;
		        kelas 	[i] = " BISNIS ";
                cout << "kelas = "<<kelas 	[i] << endl;
                cout << "Harga ="<< harga[i]<<endl;
                cout << "Masukkan Jumlah Tiket :";
                cin  >> jumlahTiket ;
                    for (int i = 0;i < jumlahTiket ;i++){
                        cout << " Masukkan nama ke- "<<i+1<<" : ";
		                cin  >> nama[i]; 
                    }
                total  = harga[i]*jumlahTiket;
                cout << "Total Harga :" << "Rp. "<<total<<endl;
                cout << "[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]\n";
        }else if((kelas	[i] == "x")||(kelas [i] == "X")){
                harga[i] = 120000;
		        kelas 	[i] = " EXSEKUTIF ";
                cout << "kelas = "<<kelas 	[i] << endl;
                cout << "Harga ="<< harga[i]<<endl;
                cout << "Masukkan Jumlah Tiket :";
                cin  >> jumlahTiket ;
                    for (int i = 0;i < jumlahTiket ;i++){
                        cout << " Masukkan nama ke- "<<i+1<<" : ";
		                cin  >> nama[i]; 
                    }
                total  = harga[i]*jumlahTiket;
                cout << "Total Harga :" << "Rp. "<<total;
        }
        nTiket++;
    }else{
        cout << "Tujuan tidak diketahui"<<endl;
    }
        // cout << "Harga tiket :"<<harga[i]<<endl;
    cout << "========================================================\n";
}


void mViewTiket(){
    cout << "========================================================\n"; 
    for (int i=0;i<nTiket;i++){
        // cout << "Kode Tiket :"<<kodeTiket[i]<<endl;
        cout << "kode beli tiket :"<<kodeBeliTiket[i]<<endl;
        cout << "Tujuan Stasiun :"<<tujuan[i]<<endl;
        cout << "Kelas  :"<<kelas [i]<<endl;
        cout << "Harga :"<<harga[i]<<endl;
        cout << "Jumlah :"<<jumlahTiket<<endl;
        // cout << "penumpang :"<<nama[i]<<endl;
        cout << "Total :"<< total<<endl;
    cout << "========================================================\n";    
    }   
}

int mSearchTiket(int kodeBeliTiketInput){
    int index = -1;
    for (int i = 0; i < nJadwal; i++){
        if (kodeBeliTiket[i] == kodeBeliTiketInput){
            index = i;
        }
    }
    return index;
}



// void mcetaktiket(int kodeTiket);


// int mSearchTiket(){
//     mSearchJadwal();
// }
