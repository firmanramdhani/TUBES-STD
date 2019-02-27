#include <iostream>
#include<conio.h>
#include <stdlib.h>
#include <ctype.h>
#include <windows.h>

#include "menu.h"
#include "child.h"
#include "parent.h"
#include "relasi.h"

using namespace std;

    List_p Lp;
    List_r Lr;
    List_c Lc;

void menu(){
    system("cls");

    string pilihan;
    while (pilihan != "1" || pilihan != "2" || pilihan != "0"){
        system("CLS");
        cout<<"                                                        SELAMAT DATANG"<<endl;
        cout<<"                                        DI LAYANAN INFORMASI KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                 MASUK SEBAGAI:"<<endl;
        cout<<endl;
        cout<<"                                         1. ADMIN"<<endl;
        cout<<endl;
        cout<<"                                         2. PENGGUNA"<<endl;
        cout<<endl;
        cout<<"                                         0. EXIT"<<endl;
        cout<<endl;
        cout<<"                                 Masukan Pilihan (1/2/0): ";
        cin>>pilihan;
        if (pilihan == "1"){
            system("CLS");
            idAdmin();
            break;
        }else if(pilihan == "2"){
            system("CLS");
            menuPengguna();
            break;
        }else if(pilihan == "0"){
            exit(0);
        }else{
            cout<<endl;
            cout<<endl;
            cout<<"                                     PILIHAN ANDA TIDAK TERSEDIA"<<endl;
            getch();
        }
    }
};

void idAdmin(){
    system("CLS");
    string x,id;
    id = "123456";

    int i = 0;
    while (i != 3 && x != "123456"){
        system("CLS");
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                             Masukan ID : ";
        cin>>x;
        i++;
        if (x == id ){
            menuAdmin();
            break;
        }else{
            cout<<endl;
            cout<<endl;
            cout<<"                              ID TIDAK TERDAFTAR SILAHKAN COBA LAGI"<<endl;
            getch();
        }
    }
    if(i == 3){
        cout<<endl;
        cout<<endl;
        system("CLS");
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"                                           ANDA SALAH MEMASUKAN ID TIGA KALI"<<endl;
        cout<<"                                          ANDA AKAN DI KEMBALIKAN KEMENU UTAMA"<<endl;
        getch();
        menu();
    }
};

void menuAdmin(){
    string pilihan;
    while (pilihan != "1"||pilihan!="2"||pilihan!="3"||pilihan!="4"||pilihan!="0"){
            system("CLS");
            cout<<"                                                        LAYANAN INFORMASI"<<endl;
            cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
            cout<<"                         =========================================================================="<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                         1. KOMPETISI"<<endl;
            cout<<endl;
            cout<<"                                         2. CLUB"<<endl;
            cout<<endl;
            cout<<"                                         3. IKUTI KOMPETISI"<<endl;
            cout<<endl;
            cout<<"                                         4. KEMBALI KE HALAMAN SEBELUMNYA"<<endl;
            cout<<endl;
            cout<<"                                         0. EXIT"<<endl;
            cout<<endl;
            cout<<"                                         Masukan Pilihan (1/2/3/0): ";
            cin>>pilihan;
            if(pilihan == "0")
            {
                exit(0);
            }else if(pilihan == "4")
            {
                system("CLS");
                menu();
                break;
            }else if(pilihan=="3"){
                system("CLS");
                ikutiKompetisi();
                break;
            }else if(pilihan == "2")
            {
                system("CLS");
                menuAdmin2();
                break;
            }else if(pilihan == "1")
            {
                system("CLS");
                menuAdmin1();
                break;
            }else{
                cout<<"                                 INPUTAN YANG ANDA MASUKAN TIDAK ADA"<<endl;
                getch();
            }
    }
};

void ikutiKompetisi(){
    system("cls");
    string pilihanawal;

    while (pilihanawal != "1"|| pilihanawal!="2"||pilihanawal!="0"){
            cout<<"                                                        LAYANAN INFORMASI"<<endl;
            cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
            cout<<"                         =========================================================================="<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                            Sebelum mengisi menu ini anda harus menginputkan data club di menu sebelumnya!"<<endl;
            cout<<"                            Jika sudah pilih menu lanjutkan!"<<endl;

            cout<<"                            1. Lanjutkan"<<endl;
            cout<<"                            2. Menu Sebelumnya"<<endl;
            cout<<"                            0. Exit"<<endl;
            cout<<endl;
            cout<<"                            Masukan Pillihan(1/2/3) : ";cin>>pilihanawal;

            if (pilihanawal == "1"){
                menulanjutan();
                break;

            }else if ( pilihanawal == "2"){
                menuAdmin();
                break;
            }else if(pilihanawal == "0"){
                     exit(0);
            }else{
                    cout<<"                             PILIHAN ANDA TIDAK TERSEDIA"<<endl;
                    getch();
                    menu();
                    break;
            }
    }
};
void menulanjutan(){
    string nama;string kota;string negara;string benua;string kompetisi;
    string x;
    string pilihan;
    system("CLS");
    while(x!="Y"||x!="y"){

            cout<<"                                                        LAYANAN INFORMASI"<<endl;
            cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
            cout<<"                         =========================================================================="<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                                 DATA CLUB PENDAFTARAN KOMPETISI "<<endl;
            cout<<endl;
            cout<<"                                         Nama Club   : ";cin>>nama;
            cout<<"                                         Asal Kota   : ";cin>>kota;
            cout<<"                                         Asal Negara : ";cin>>negara;
            cout<<"                                         Asal Benua  : ";cin>>benua;
            cout<<"                                         Kompetisi   : ";cin>>kompetisi;
            cout<<endl;

            system("CLS");
            cout<<"                                                        LAYANAN INFORMASI"<<endl;
            cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
            cout<<"                         =========================================================================="<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                                   DATA CLUB ANDA ADALAH  "<<endl;
            cout<<endl;
            cout << "                                          Nama Club   : "<<nama<<endl;
            cout << "                                          Nama Kota   : "<<kota<<endl;
            cout << "                                          Nama Negara : "<<negara<<endl;
            cout << "                                          Nama Benua  : "<<benua<<endl;
            cout << "                                          Kompetisi   : "<<kompetisi<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                         Apakah yakin club anda akan mengikuti "<<kompetisi<<" ?(yes/no) : ";
            cin>>pilihan;

            if(pilihan == "yes" || pilihan== "Yes" || pilihan == "YES"){

                address_p x = findlementparent(Lp,kompetisi);
                address_c y = findlementchild(Lc,nama);
                insertLast_r(Lr,alokasi_r(x,y));
                system("cls");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                     DATA ANDA BERHASIL DISIMPAN";
                cout<<endl;
                cout<<endl;
                cout<<endl;
                getch();


            }else{
                system("CLS");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                    DATA ANDA TIDAK DISIMPAN "<<endl;
                cout<<endl;
                getch();
            }
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                          Apakah anda ingin memasukan data lagi?(y/n) : ";cin>>x;
            if (x =="Y"||x=="y" ){
                menulanjutan();
                break;
            }else{
                menuAdmin();
                break;
            }
    }

};


void menuAdmin1(){
    string pilihan;
    system("cls");
    while(pilihan != "1"||pilihan!="2"||pilihan!="3"||pilihan!="4"||pilihan!="0"){
            cout<<"                                                        LAYANAN INFORMASI"<<endl;
            cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
            cout<<"                         =========================================================================="<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                         1. MASUKAN DATA KOMPETISI BARU"<<endl;
            cout<<endl;
            cout<<"                                         2. UPDATE KOMPETISI"<<endl;
            cout<<endl;
            cout<<"                                         3. DELETE KOMPETISI"<<endl;
            cout<<endl;
            cout<<"                                         4. KEMBALI KE HALAMAN SEBELUMNYA"<<endl;
            cout<<endl;
            cout<<"                                         0. EXIT"<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                         Masukan Pilihan (1/2/3/4/0): ";
            cin>>pilihan;
            if(pilihan == "0")
            {
                exit(0);
            }else if(pilihan == "4")
            {
                system("CLS");
                menuAdmin();
                break;

            }else if(pilihan == "3")
            {
                system("cls");
                menuAdminDeleteKompetisi();
                break;

            }else if(pilihan == "2")
            {
                system("CLS");
                menuAdminUpdateKompetisi();
                break;

            }else if(pilihan == "1")
            {
                system("CLS");
                menuAdminKompetisiBaru();
                break;
            }else{
                cout<<"                                     INPUTAN YANG ANDA MASUKAN TIDAK ADA"<<endl;
                getch();
                menuAdmin1();
                break;
            }
    }
};

void menuAdminKompetisiBaru(){
    system("CLS");
    string x;
    string u;
    infotype_p X;
    string namakompetis;string jeniskompetisi; string asalnegara; string asalbenua;
    system("CLS");
    while (x!="Y"||x!="y"||x!="n"||x!="N"){
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                                     DATA KOMPETISI"<<endl;
        cout<<endl;
        cout<<"                                Nama Kompitisi     : ";
        cin>>namakompetis;
        cout<<"                                Jenis Kompetis     : ";
        cin>>jeniskompetisi;
        cout<<"                                Asal Negara        : ";
        cin>>asalnegara;
        cout<<"                                Asal Benua         : ";
        cin>>asalbenua;
        cout<<endl;
        cout<<endl;

        system("cls");
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                                  DATA KOMPETISI YANG ANDA MASUKAN"<<endl;
        cout<<endl;
        cout<<"                                Nama Kompitisi     : "<<namakompetis<<endl;
        cout<<"                                Jenis Kompetis     : "<<jeniskompetisi<<endl;
        cout<<"                                Asal Negara        : "<<asalnegara<<endl;
        cout<<"                                Asal Benua         : "<<asalbenua<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                Simpan data kompetisi yang anda masukan?(y/n): ";cin>>u;

        if (u =="Y"||u=="y"){
                insertLast_p(Lp, alokasi_p(namakompetis, jeniskompetisi, asalnegara, asalbenua));
                system("cls");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                      DATA BERHASIL DISIMPAN"<<endl;
                getch();

        }else{
            system("cls");
            cout<<"                                                        LAYANAN INFORMASI"<<endl;
            cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
            cout<<"                         =========================================================================="<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                                      DATA TIDAK DISIMPAN"<<endl;
            getch();
            }

        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                         Apakah anda ingin memasukan lagi?(Y/N) : ";
        cin>>x;

        if ((x == "Y") || (x == "y")){
            system("cls");
            menuAdminKompetisiBaru();
            break;

        }else{
            system("CLS");
            menuAdmin();
            break;

        }
    }

};
void menuAdminUpdateKompetisi(){
    system("CLS");
    string pilihan;
    address_p x;
    string a;

    do{
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                             Masukan Nama Kompetisi Yang Akan di Update : ";cin>>pilihan;
        x = findlementparent(Lp, pilihan);

        if (x == NULL){
                system("CLS");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                         DATA TIDAK DITEMUKAN ";
                cout<<endl;
                getch();

                menuAdmin1();
                break;
        }else{
                system("CLS");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                   DATA KOMPETISI YANG ANDA CARI"<<endl;
                cout<<endl;
                cout<<"                                             Nama Kompetisi   : "<<x->info.NamaKompetisi<<endl;
                cout<<"                                             Jenis Kompetisi  : "<<x->info.JenisKompetisi<<endl;
                cout<<"                                             Asal Negara      : "<<x->info.asalnegara<<endl;
                cout<<"                                             Asal Benua       : "<<x->info.asalbenua<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                             Apakah anda yakin akan meng update kompetisi ini?(yes/no) : ";cin>>a;
                if (a == "yes" || a == "YES" || a == "Yes"){
                    string namabaru;string jenisbaru; string asalnegarabaru; string asalbenuabaru;
                    system("CLS");
                    cout<<"                                                        LAYANAN INFORMASI"<<endl;
                    cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                    cout<<"                         =========================================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                                                   MASUKA DATA KOMPETISI BARU"<<endl;
                    cout<<endl;
                    cout<<"                                             Nama Kompetisi   : ";cin>>namabaru;
                    cout<<"                                             Jenis Kompetisi  : ";cin>>jenisbaru;
                    cout<<"                                             Asal Negara      : ";cin>>asalnegarabaru;
                    cout<<"                                             Asal Benua       : ";cin>>asalbenuabaru;

                    updateparent(x, namabaru,jenisbaru,asalnegarabaru,asalbenuabaru);
                    system("CLS");
                    cout<<"                                                        LAYANAN INFORMASI"<<endl;
                    cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                    cout<<"                         =========================================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                                                   KOMPETISI BERHASIL DI UPDATE";
                    getch();
                    menuAdmin1();
                    break;
                }else{
                    system("CLS");
                    cout<<"                                                        LAYANAN INFORMASI"<<endl;
                    cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                    cout<<"                         =========================================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                                                   KOMPETISI TIDAK DI UPDATE";
                    getch();
                    menuAdmin1();
                    break;
                }

        }

    }while (a != "yes" || a != "YES" || a != "Yes" );

};
void menuAdminDeleteKompetisi(){
        system("CLS");
        string pilih;
        address_p z;
        string b;
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                             Masukan Nama Kopetisi Yang Akan di Delete : ";cin>>pilih;
        z = findlementparent(Lp, pilih);

        if (z == NULL){
                system("CLS");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                         DATA TIDAK DITEMUKAN ";
                cout<<endl;
        }else

                system("CLS");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                   DATA KOMPETISI YANG ANDA CARI"<<endl;
                cout<<endl;
                cout<<"                                             Nama Kopetisi   : "<<z->info.NamaKompetisi<<endl;
                cout<<"                                             Jenis Kopetisi  : "<<z->info.JenisKompetisi<<endl;
                cout<<"                                             Asal Negara     : "<<z->info.asalnegara<<endl;
                cout<<"                                             Asal Benua      : "<<z->info.asalbenua<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                             Apakah anda yakin akan mendelete club ini?(yes/no) : ";cin>>b;
                if (b == "yes" || b == "YES" || b == "Yes"){

                  if((Lp.first->next == NULL) && (Lp.first != nil)){
                        deleteFirst_r(Lr, findElemenrrelasiviaParent(Lr, z));
                        deleteFirst_p(Lp, z);

                    }
                    else if((Lp.first->next->next !=  NULL) && (Lp.first->next != nil))
                    {
                        deleteAfter_r(Lr, findElemenrrelasiviaParent(Lr, z));
                        deleteAfter_p(Lp, z);
                    }
                    else if((Lp.first != nil) && (Lp.first->next != NULL))
                    {
                        deleteLast_r(Lr, findElemenrrelasiviaParent(Lr, z));
                        deleteLast_p(Lp, z);
                    }



                    system("CLS");
                    cout<<"                                                        LAYANAN INFORMASI"<<endl;
                    cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                    cout<<"                         =========================================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                                                   CLUB BERHASIL DI DELETE";
                    getch();
                    menuAdmin2();
                }else if (b == "no" || b == "NO" || b == "No"){
                    system("CLS");
                    menuAdmin2();
                }else{
                    system("CLS");
                    cout<<"                                                        LAYANAN INFORMASI"<<endl;
                    cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                    cout<<"                         =========================================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                                                 KEYWORD YANG ANDA MASUKAN SALAH"<<endl;
                    getch();
                }
        system("CLS");
        menuAdmin1();
}






void menuAdmin2(){
    string pilihan;
    system("cls");
    while (pilihan != "1"||pilihan!="2"||pilihan!="3"||pilihan!="4"||pilihan!="0"){
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                         1. MASUKAN DATA CLUB BARU"<<endl;
        cout<<endl;
        cout<<"                                         2. UPDATE CLUB"<<endl;
        cout<<endl;
        cout<<"                                         3. DELETE CLUB"<<endl;
        cout<<endl;
        cout<<"                                         4. KEMBALI KE HALAMAN SEBELUMNYA"<<endl;
        cout<<endl;
        cout<<"                                         0. EXIT"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                         Masukan Pilihan (1/2/3/4/0): ";
        cin>>pilihan;
        if(pilihan == "0")
        {
            exit(0);
        }else if(pilihan == "4")
        {
            system("CLS");
            menuAdmin();
            break;

        }else if(pilihan == "3")
        {
            system("CLS");
            menuAdminDeleteClub();
            break;

        }else if(pilihan == "2")
        {
            system("CLS");
            menuAdminUpdateClub();
            break;
        }else if(pilihan == "1")
        {
            system("CLS");
            menuAdminClubBaru();
            break;
        }else{
            cout<<endl;
            cout<<"                                         INPUTAN YANG ANDA MASUKAN TIDAK TERSEDIA ADA"<<endl;
            getch();
            menuAdmin2();
            break;        }
    }
};

void menuAdminClubBaru(){
    system("CLS");
    string pilihan;
    string c;
    infotype_c X;
    string namaclub; string namamanager; string asalkota; string asalnegara; string jumlahpemain;

    while (pilihan!="Y"||pilihan!="y"||pilihan!="n"||pilihan!="N"){
            system("CLS");
            cout<<"                                                        LAYANAN INFORMASI"<<endl;
            cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
            cout<<"                         =========================================================================="<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                                     DATA CLUB SEPAKBOLA"<<endl;
            cout<<endl;
            cout<<"                                Nama Club        : ";
            cin>>namaclub;
            cout<<"                                Nama Manager     : ";
            cin>>namamanager;
            cout<<"                                Asal Kota        : ";
            cin>>asalkota;
            cout<<"                                Asal Negara      : ";
            cin>>asalnegara;
            cout<<"                                Jumlah Pemain    : ";
            cin>>jumlahpemain;
            cout<<endl;
            cout<<endl;

            system("cls");
            cout<<"                                                        LAYANAN INFORMASI"<<endl;
            cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
            cout<<"                         =========================================================================="<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                              DATA CLUB SEPAKBOLA YANG ANDA MASUKAN"<<endl;
            cout<<endl;
            cout<<"                                     Nama Club        : "<<namaclub<<endl;
            cout<<"                                     Nama Manager     : "<<namamanager<<endl;
            cout<<"                                     Asal Kota        : "<<asalkota<<endl;
            cout<<"                                     Asal Negara      : "<<asalnegara<<endl;
            cout<<"                                     Jumlah Pemain    : "<<jumlahpemain<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                     Simpan data club yang anda masukan?(y/n) : ";cin>>c;
            if (c =="Y"||c =="y"){
                X = createinfotypeChild(namaclub, namamanager, asalkota, asalnegara, jumlahpemain);
                insertLast_c(Lc, alokasi_c(X));
                system("cls");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                      DATA BERHASIL DISIMPAN"<<endl;
                getch();
            }else{
                system("cls");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                      DATA TIDAK DISIMPAN"<<endl;
                getch();
            }

            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                Apakah anda ingin memasukan lagi?(Y/N) : ";
            cin>>pilihan;
        if ((pilihan == "Y") || (pilihan == "y")){
            system("cls");
            menuAdminClubBaru();
            break;
        }else{
            system("CLS");
            menuAdmin();
            break;
        }
    }
}
void menuAdminUpdateClub(){

    system("CLS");
    string pilih;
    address_c z;
    string b;
    while (b != "yes" ||b != "YES" || b != "Yes"){
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                             Masukan Nama Club Yang Akan di Update : ";cin>>pilih;
        z = findlementchild(Lc, pilih);

        if (z == NULL){
                system("CLS");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                         DATA TIDAK DITEMUKAN ";
                cout<<endl;
                getch();
                menuAdmin2();
                break;
        }else

                system("CLS");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                     DATA CLUB YANG ANDA CARI"<<endl;
                cout<<endl;
                cout<<"                                             Nama Club       : "<<z->info.NamaClub<<endl;
                cout<<"                                             Asal Kota       : "<<z->info.asalkota<<endl;
                cout<<"                                             Asal Negara     : "<<z->info.asalnegara<<endl;
                cout<<"                                             Nama Manager    : "<<z->info.manager<<endl;
                cout<<"                                             Jumlah Pemain   : "<<z->info.jmlPemain<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                             Apakah anda yakin akan meng update club ini?(yes/no) : ";cin>>b;
                if (b == "yes" || b == "YES" || b == "Yes"){
                    string NamaClub; string asalkota; string asalnegara; string manager;
                    string jumlahpemain;
                    system("CLS");
                    cout<<"                                                        LAYANAN INFORMASI"<<endl;
                    cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                    cout<<"                         =========================================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                                                   MASUKA DATA CLU BARU"<<endl;
                    cout<<endl;
                    cout<<"                                             Nama Club       : ";cin>>NamaClub;
                    cout<<"                                             Asal Kota       : ";cin>>asalkota;
                    cout<<"                                             Asal Negara     : ";cin>>asalnegara;
                    cout<<"                                             Nama Manager    : ";cin>>manager;
                    cout<<"                                             Jumlah Pemain   : ";cin>>jumlahpemain;

                    updatechild(z, NamaClub,asalkota,asalnegara,manager,jumlahpemain);

                    system("CLS");
                    cout<<"                                                        LAYANAN INFORMASI"<<endl;
                    cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                    cout<<"                         =========================================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                                                  DATA CLUB BERHASIL DI UPDATE";
                    getch();
                    menuAdmin2();
                    break;
                }else{
                    system("CLS");
                    cout<<"                                                        LAYANAN INFORMASI"<<endl;
                    cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                    cout<<"                         =========================================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                                                    DATA CLUB TIDAK DI UPDATE";
                    getch();
                    menuAdmin2();
                    break;
                }

    }


};

void menuAdminDeleteClub(){
        system("CLS");
        string pilih, P;
        address_c z;
        string b;
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                             Masukan Nama Club Yang Akan di Delete : ";cin>>pilih;
        z = findlementchild(Lc, pilih);

        if (z == NULL){
                system("CLS");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                      DATA TIDAK DITEMUKAN ";
                cout<<endl;
                getch();
                menuAdmin2();
        }else

                system("CLS");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                   DATA CLUB YANG ANDA CARI"<<endl;
                cout<<endl;
                cout<<"                                             Nama Club       : "<<z->info.NamaClub<<endl;
                cout<<"                                             Asal Kota       : "<<z->info.asalkota<<endl;
                cout<<"                                             Asal Negara     : "<<z->info.asalnegara<<endl;
                cout<<"                                             Nama Manager    : "<<z->info.manager<<endl;
                cout<<"                                             Jumlah Pemain   : "<<z->info.jmlPemain<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                             Apakah anda yakin akan mendelete club ini?(yes/no) : ";cin>>b;
                if (b == "yes" || b == "YES" || b == "Yes"){


                    if((Lc.first->next == Lc.first) && (Lc.first != nil))
                    {
                        deleteFirst_r(Lr, findElemenrrelasiviaChild(Lr, z));
                        deleteFirst_c(Lc, z);

                    }
                    else if((Lc.first->next->next !=  Lc.first) && (Lc.first->next != nil))
                    {
                        deleteAfter_r(Lr, findElemenrrelasiviaChild(Lr, z));
                        deleteAfter_c(Lc, z);
                    }
                    else if((Lc.first != nil) && (Lc.first->next != Lc.first))
                    {
                        deleteLast_r(Lr, findElemenrrelasiviaChild(Lr, z));
                        deleteLast_c(Lc, z);
                    }



                    system("CLS");
                    cout<<"                                                        LAYANAN INFORMASI"<<endl;
                    cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                    cout<<"                         =========================================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                                                   CLUB BERHASIL DI DELETE";
                    getch();
                    menuAdmin2();

                }else if (b == "no" || b == "NO" || b == "No"){
                    system("CLS");
                    menuAdmin2();
                }else{
                    system("CLS");
                    cout<<"                                                        LAYANAN INFORMASI"<<endl;
                    cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                    cout<<"                         =========================================================================="<<endl;
                    cout<<endl;
                    cout<<endl;
                    cout<<"                                                 KEYWORD YANG ANDA MASUKAN SALAH"<<endl;
                    getch();
                    menuAdmin2();
                }



}

void menuPengguna(){
    system("cls");
    string pilihan;
    while (pilihan != "1"||pilihan!="2"||pilihan!="3"||pilihan!="0"){
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                         1. INFORMASI KOMPETISI"<<endl;
        cout<<endl;
        cout<<"                                         2. INFORMASI CLUB"<<endl;
        cout<<endl;
        cout<<"                                         3. KEMBALI KE HALAMAN SEBELUMNYA"<<endl;
        cout<<endl;
        cout<<"                                         0. EXIT"<<endl;
        cout<<endl;
        cout<<"                                         Masukan Pilihan (1/2/3/0): ";
        cin>>pilihan;
        if(pilihan == "0")
        {
            exit(0);
        }else if(pilihan == "3")
        {
            system("CLS");
            menu();
            break;
        }else if(pilihan == "2")
        {
            system("CLS");
            menuPenggunaInformasiClub();
            break;
        }else if(pilihan == "1")
        {
            system("CLS");
            menuPenggunaInformasiKompetisi();
            break;
        }else{
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<"                                         INPUTAN YANG ANDA MASUKAN TIDAK TERSEDIA ADA"<<endl;
            getch();
            menuPengguna();
        }
    }



};
void menuPenggunaInformasiKompetisi(){
    system("cls");
    string x;
    string pilihan;
    while (pilihan != "y" ||pilihan !="Y" ){
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                     Masukan Nama Kompetisi : ";cin>>x;
        system("cls");
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        printElementparent(Lr, x);

        cout<<endl;
        cout<<endl;
        cout<<"                                     Kembali Kemenu Sebelumnya?(y/n) : " ;cin>>pilihan;

        if(pilihan == "Y" || pilihan =="y"){
            menuPengguna();
            break;
        }else{
            menuPenggunaInformasiKompetisi();
            break;
        }
        getch();
    }

};
void menuPenggunaInformasiClub(){
    system("cls");

    string x;
    string pilihan;
    while (pilihan != "Y" || pilihan !="y"){
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                      CLUB SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"                                     Masukan Nama Club : ";cin>>x;
        system("cls");

        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                      CLUB SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        printElementchild(Lr, x);
        cout<<endl;
        cout<<endl;
        cout<<"                                     Kembali Kemenu Sebelumnya?(y/n) : " ;cin>>pilihan;
        if(pilihan == "Y" || pilihan =="y"){
                menuPengguna();
                break;
        }else{
                menuPenggunaInformasiClub();
                break;
        }
        getch();
    }

};




