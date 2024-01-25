#include "../model/ModelUser.h"
#include <iostream>
#include <string>

using namespace std;

void vAddUser(){
    string inpnama,inpnotelp,inpemail,inppassword;
    cout << "Masukkan Nama :";
    cin.ignore(); //mengontrol(membersihkan) buffer
    getline(cin, inpnama);
    cout << "Masukkan No.Telp :";
    cin  >> inpnotelp;
    cout << "Masukkan Email :";
    cin  >> inpemail;
    cout << "Masukkan Password :";
    cin  >> inppassword;
    mAddUser(inpnama,inpnotelp,inpemail,inppassword);
}

void vViewUser(){
    mViewUser();
}

void vSearchUser(){
    string inpnotelp;
    cout << "Masukkan No.telp :";
    cin  >> inpnotelp;
    int index = mSearchUser(inpnotelp);
    if (index != 1){
        cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
        cout << "Data Member"<<endl;
        cout << "Nama\t\tNo.telp\t\tEmail\t\tPassword"<<endl;
        cout << "==========================================="<<endl;
        cout << namauser[index]<<"\t\t"<<notelp[index]<<"\t"<<email[index]<<"\t\t"<<password[index]<<endl;
        cout << "==========================================="<<endl;
    }else {
        cout << "No.telp tidak ditemukan"<<endl;
    }
}

void vUpdateUser(){
    string inpnotelp,inppassword;
    cout << "Masukkan No.telp :";
    cin  >> inpnotelp;
    cout << "Masukkan password baru :";
    cin  >> inppassword;
}

bool vLoginUser(){
    string namauserLogin, passwordLogin;
    bool pendaftaran = false;
    int kesempatan=0;
    do{

    cout << "Masukkan Nama User :";
    cin.ignore(); //mengontrol(membersihkan) buffer
    getline(cin, namauserLogin);

    cout << "Masukkan Password :";
    getline(cin, passwordLogin);

    bool loginBerhasil = mLoginUser(namauserLogin,passwordLogin);
    
        if (loginBerhasil) {
        cout << "===============================================================================\n";    
        cout << "Login berhasil ^^" << endl;
        return true;
        } else {
            cout << "Login gagal. Periksa kembali username dan password Anda." << endl;
            kesempatan++;
            cout << "Kesempatan anda tinggal "<<3-kesempatan<<" kali !!!"<<endl;
            cout << "===============================================================================\n";
        }
    }while (kesempatan < 3);
    cout << "kesempatan anda telah hangus coba lagi mbesok "<<endl;
    cout << "===============================================================================\n";
    return false;    

}


void vRegisterUser() {
    string nama, nomertelp, email, password;

    cout << "Masukkan Nama Lengkap :";
    cin.ignore();
    getline(cin, nama);

    cout << "Masukkan Nomor Telepon :";
    cin >> nomertelp;

    cout << "Masukkan Email :";
    cin >> email;

    cout << "Masukkan Password :";
    cin >> password;

    cout << "==================================================\n";

    // Panggil fungsi untuk menambahkan user ke database
    mAddUser(nama, nomertelp, email, password);
    cout << "===============================================================================\n";
    cout << "Pendaftaran berhasil \n";
    cout << "Nama :" << nama << endl;
    cout << "Nomer telpon :" << nomertelp << endl;
    cout << "Email :" << email << endl;
    cout << "Password :" << password << endl;
    cout << "===============================================================================\n";
}


//  if (pilihan == 1) {
//         // Login
//         while (attempts < 3) {
//             vLoginUser();
//             attempts++;

//             // Cek apakah login berhasil
//             if (loginSuccess) {
//                 // ... (Lakukan tindakan setelah login sukses)
//                 MenuUser();
//                 MenuJadwal();
//                 MenuTiket();
//                 break;  // Keluar dari loop jika login berhasil
//             } else {
//                 cout << "Login gagal. Percobaan ke-" << attempts << " dari 3" << endl;
//             }
//         }

//         // Cek apakah sudah mencapai batas percobaan
//         if (attempts == 3) {
//             cout << "Anda telah mencapai batas percobaan login. Silahkan coba lagi besok." << endl;
//         }
//     } else if (pilihan == 2) {
//         registeruser();
//     } else {
//         cout << "Pilihan Tidak Tersedia" << endl;
//     }

//     return 0;


