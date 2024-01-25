#include "view/viewuser.h"
#include "view/viewkereta.h"
#include "view/viewjadwal.h"
#include "view/viewtiket.h"
#include <string>
#include <iostream>

using namespace std;

void staticvalue(){
    mAddKereta("doho",'A');
    mAddKereta("arjuno",'B');
    mAddKereta("doho",'C');


    mAddJadwal("doho","11-11-2024","sepanjang");
    mAddJadwal("arjuno","12-12-2024","sepanjang");
    mAddJadwal("doho","10-10-2024","sepanjang");

    mAddUser("paijo assalam","031234567","paijo@gmail.com","2323");
    mAddUser("paijem assapat","031234568","paija@gmail.com","1234");
    mAddUser("paiji asyukur","031234569","paiji@gmail.com","3232");

}



void MenuUser(){
    int pilihan;
    do{
    cout << "Menu User" <<endl;
    cout << "1. Tambah User"<<endl;
    cout << "2. Lihat User Member"<< endl;
    cout << "3. Cari User Member" << endl;
    cout << "4. Update Password" << endl;
    cout << "5. Exit"<<endl;
    cout << "Masukkan pilihan :";
    cin >> pilihan;
    switch (pilihan){
        case 1:
        vAddUser();
        break;
        case 2:
        vViewUser();
        break;
        case 3:
        vSearchUser();
        break;
        case 4:
        vUpdateUser();
        break;
        case 5:
        cout << "Terima kasih,Silahkan Melanjutkan"<<endl;
        pilihan = 5;
        break;
        default :
        cout << "Tidak ada pilihan"<<endl;
        break;
    }
    }while (pilihan != 5);
    cout << "Program Exit";
}
//Menu Kereta
void MenuKereta(){
    int pilih;
    do{
        cout << "Menu Kereta "<< endl;
        cout << "1. Tambah Kereta"<< endl;
        cout << "2. informasi Kereta" << endl;
        cout << "3. Cari Kereta" << endl;
        cout << "4. Exit" <<endl;
        cout << "Masukkan pilihan :";
        cin >> pilih;
        cout << "----------------------------------------------\n";
            switch (pilih){
            case 1:
            vAddKereta();
            break;
            case 2:
            vViewKeretaa();
            break;
            case 3:
            vSearchKereta();
            break;
            case 4:
            cout << "Terima Ks"<<endl;
            pilih = 4;
            break;
            default:
            cout << "pilihan tidak tersedia"<<endl;
            break;
    }
    }while (pilih != 4);
    cout << "Program Exit";
}

//Menu Jadwal
void MenuJadwal(){
    int pilih;
    do{
        cout << "Menu Jadwal "<< endl;
        cout << "1. Tambah Jadwal"<< endl;
        cout << "2. informasi Jadwal" << endl;
        cout << "3. Cari Jadwal" << endl;
        cout << "4. Exit" <<endl;
        cout << "Masukkan pilihan :";
        cin >> pilih;
            switch (pilih){
            case 1:
            vAddJadwal();
            break;
            case 2:
            vViewjadwal();
            break;
            case 3:
            vSearchJadwal();
            
            break;
            case 4:
            cout << "Terima Ks"<<endl;
            pilih = 4;
            break;
            default:
            cout << "pilihan tidak tersedia"<<endl;
            break;
    }
    }while (pilih != 4);
    cout << "Program Exit";
}

//Menu Jadwal
void MenuTiket(){
    int pilih;
    do{
        cout << "===============================================\n";
        cout << "Menu Tiket "<< endl;
        cout << "1. Cari Tiket"<< endl;
        cout << "2. Informasi Tiket" << endl;
        cout << "3. Cetak Jadwal Tiket" << endl;
        cout << "4. Exit" <<endl;
        cout << "Masukkan pilihan :";
        cin >> pilih;
        cout << "----------------------------------------------\n";
            switch (pilih){
            case 1:
            vSearchtiketTujuan();
            break;
            case 2:
            vViewTiket();
            break;
            case 3:
            int kodeTiketPilihan;
            cout << "Masukkan Kode Tiket Jadwal :";
            cin >>kodeTiketPilihan;
            cout << "========================================================\n";
            cetakTiket(kodeTiketPilihan);
            break;
            case 4:
            cout << "Terima Ks"<<endl;
            pilih = 4;
            break;
            default:
            cout << "pilihan tidak tersedia"<<endl;
            break;
    }
    }while (pilih != 4);
    cout << "Program Exit";
}

//Menu Admin
void MenuAdmin(){
    int pilih;
    do{
        cout << "===============================================\n";
        cout << "Menu Admin "<< endl;
        cout << "1. Menu Kereta"<< endl;
        cout << "2. Menu Jadwal" << endl;
        cout << "3. Menu Tiket" << endl;
        cout << "4. Exit" <<endl;
        cout << "Masukkan pilihan :";
        cin >> pilih;
        cout << "===============================================\n";
            switch (pilih){
            case 1:
            MenuKereta();
            break;
            case 2:
            MenuJadwal();
            break;
            case 3:
            MenuTiket();
            break;
            case 4:
            cout << "Terima Ks"<<endl;
            pilih = 4;
            break;
            default:
            cout << "pilihan tidak tersedia"<<endl;
            break;
    }
    }while (pilih != 4);
    cout << "Program Exit";
}

//Menu Utama
void MenuUtama(){
    int pilih;
    do{
        cout << "===============================================\n";
        cout << "Menu Admin "<< endl;
        cout << "1. Menu Admin"<< endl;
        cout << "2. Menu User" << endl;
        cout << "3. Exit" <<endl;
        cout << "Masukkan pilihan :";
        cin >> pilih;
        cout << "===============================================\n";
            switch (pilih){
            case 1:
            MenuAdmin();
            break;
            case 2:
            MenuUser();
            break;
            case 3:
            cout << "Terima Ks"<<endl;
            pilih = 3;
            break;
            default:
            cout << "pilihan tidak tersedia"<<endl;
            break;
    }
    }while (pilih != 3);
    cout << "Program Exit";
}

int main(){
    staticvalue();

    int pilihan;
    bool loginberhasil = false;
    bool pendaftaran = false;
        cout << "===============================================\n";
        cout << "WELCOME di aplikasi kereta api (sepanjang)\n";
    do{    
        cout << "pilih Menu" << endl;
        cout << "1. LOGIN" << endl;
        cout << "2. DAFTAR" << endl;
        
        cout << "masukkan pilihan :";
        cin >> pilihan;
        cout << "==============================================\n";
            if (pilihan == 1){
                loginberhasil = vLoginUser();
                if (loginberhasil){
                    MenuUtama();
                break;
                }else{
                    cout << "ingin mendaftar (y/n) :";
            char akses;
            cin  >> akses;
            if(akses == 'y'||akses=='Y'){
                vRegisterUser();
                pendaftaran = true;
                cout << "pendaftaran berhasil"<<endl;
                continue;
            }else{
                cout << "kerja bagus"<<endl;
                break;
            }
                }
                
            }else if (pilihan ==2){
                vRegisterUser();
                pendaftaran = true;

                cout << "pendaftaran berhasil, silahkan login sekarang"<<endl;
                continue;
            }else{
                cout << "Pilihan gak ada "<<endl;
            }
        
        }while(true);
        if (pendaftaran){
            main();
        }
        return 0;
}
// kesempatan--;

            // if(kesempatan > 0){
            //     cout << "kesempatan anda tinggal "<<kesempatan<<" kaali "<<endl;
            // }else {
            //     cout << "kesempatan anda telah habis,silahkan login lagi esok hari ya "<<endl;
            //     break;
            // }