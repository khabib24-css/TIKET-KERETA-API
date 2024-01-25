#include <iostream>
#include <string>
#include "../Database/DatabaseUser.h"

using namespace std;



void mAddUser (string inpuser,string inpnotelp,string inpemail,string inppassword){
    namauser[nUSER] = inpuser;
    notelp[nUSER] = inpnotelp;
    email[nUSER] = inpemail;
    password[nUSER] = inppassword;
    nUSER++;
}

//untuk melihat seluruh isi filenya
void mViewUser (){
    cout << "Data user"<< endl;
    cout << "Nama\t\tNo. Telp\t\tEmail\t\t Password"<< endl;
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
    for (int i = 0;i < nUSER; i++){
        cout << namauser [i] << "\t\t" << notelp [i] << "\t" << email [i] << "\t\t" << password [i] << endl;
    }
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
}

int mSearchUser(string inpnotelp){
    for (int i=0;i<nUSER;i++){
        return 1;
    }
    return -1;
}

void mUpdateUser(string inpnotelp,string inppass){
    int index = mSearchUser(inpnotelp);
    if (index != -1){
        password[index]=inppass;
        cout << "Password berhasil diubah"<<endl;
    }else{
        cout << "No.telp tidak ditemukan"<<endl;
    }
}

bool mLoginUser(string inputUser,string inputPassword){
    for (int i = 0;i < nUSER;i++){
        if (namauser[i]==inputUser && password[i]==inputPassword){
            return true;
        }
    }
    return false;
}