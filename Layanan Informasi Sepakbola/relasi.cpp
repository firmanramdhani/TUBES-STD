#include <iostream>
#include <conio.h>
#include "relasi.h"

using namespace std;

address_r alokasi_r(address_p X, address_c Y){

        address_r P;

        P = new element_r;
        P->adr_parent = X;
        P->adr_child = Y;
        next(P) = NULL;

        return P;
}

void dealokasi_r(address_r P){
    P = nil;
}

//membuat List
void createList_r(List_r &L){
    first(L) = nil;
}

//Jenis Insert
void insertFirst_r(List_r &L, address_r P){

    if(first(L) == nil)
        {
            first(L) = P;
    }else{
        next(P) = first(L);
        first(L) = P;
    }
}

void insertLast_r(List_r &L, address_r P){
    address_r Q;

    if(first(L) == nil){
        first(L) = P;
    }else if(L.first->next == NULL){
            L.first->next = P;
    }else{
        Q = first(L);
        while(next(Q) != nil)
            {
                Q = next(Q);
            }
        next(Q) = P;
        }
}
//Jenis Delete
void deleteFirst_r(List_r &L, address_r P){
    if (L.first == NULL){
        cout<<"List Kosong";
    }else if ( L.first->next == NULL){
        P = L.first;
        L.first = NULL;
    }else{
        P = L.first;
        L.first = L.first->next;

    }
    dealokasi_r(P);
};
void deleteLast_r(List_r &L, address_r P){
    if (L.first == NULL){
        cout<<"List Kosong";
    }else if ( L.first->next == NULL){
        P = L.first;
        L.first = NULL;
    }else{
        address_r Q = L.first;
        while (Q->next->next != NULL){
            Q = Q->next;
        }
        P = Q->next;
    }
    dealokasi_r(P);
};
void deleteAfter_r(List_r &L, address_r P){
        if (L.first == NULL){
        cout<<"List Kosong";
    }else if ( L.first->next == NULL){
        P = L.first;
        L.first = NULL;
    }else{

        address_r prec = L.first;
        while(prec->next != P){
            prec = prec->next;
        }
        P = prec->next;
        prec->next = P->next;
        P->next = NULL;
    }
};
void printElementchild(List_r L, string club){
    address_r P = L.first;
    cout<<"                                             Kompetisi Yang diikuti adalah : "<<endl;
    int i = 0;
    while (P->next != NULL){
        if(P->adr_child->info.NamaClub == club){
            i = i+1;
            cout<<endl;
            cout<<"                                              "<<i<<". "<<P->adr_parent->info.NamaKompetisi<<endl;

        }
       P = P->next;
    }
    if (i== 0) {
        cout<<"                                        Kompetisi yang anda cari tidak diikuti club apapun!!!"<<endl;

    }
};




void printElementparent(List_r L, string kompetisi){

    address_r P = L.first;
    int i = 0;

    if (L.first != NULL){
        address_r Q = L.first;
        while ( Q->next!= NULL && P->adr_parent->info.NamaKompetisi != kompetisi){
                Q = Q->next;
        }
        if(Q->adr_parent->info.NamaKompetisi == kompetisi){
            cout<<"                                                   DATA KOMPETISI"<<endl;
            cout<<endl;
            cout<<"                                         Nama Kompetisi  : "<<Q->adr_parent->info.NamaKompetisi<<endl;
            cout<<"                                         Jenis Kompetisi : "<<Q->adr_parent->info.JenisKompetisi<<endl;
            cout<<"                                         Asal Negara     : "<<Q->adr_parent->info.asalnegara<<endl;
            cout<<"                                         Asal Benua      : "<<Q->adr_parent->info.asalbenua<<endl;
            cout<<endl;
            cout<<endl;

            cout<<"                                       CLUB YANG TERDAFTAR DALAM KOMPETISI : "<<endl;


            while (P != NULL){
                if(P->adr_parent->info.NamaKompetisi == kompetisi){
                    i = i+1;
                    cout<<endl;
                    cout<<"                                              "<<i<<". "<<P->adr_child->info.NamaClub<<endl;

                }
                P = P->next;
            }
            if (i== 0) {
                system("cls");
                cout<<"                                                        LAYANAN INFORMASI"<<endl;
                cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
                cout<<"                         =========================================================================="<<endl;
                cout<<endl;
                cout<<endl;
                cout<<"                                                   KOMPETISI YANG ANDA CARI "<<endl;
                cout <<"                                             TIDAK DIIKUTI CLUB MANAPUN TERDAFTAR "<<endl;
                getch();
            }
        }
    }else{
        system("cls");
        cout<<"                                                        LAYANAN INFORMASI"<<endl;
        cout<<"                                                   KOMPETISI SEPAK BOLA DUNIA"<<endl;
        cout<<"                         =========================================================================="<<endl;
        cout<<endl;
        cout<<endl;

        cout<<"                                              KOMPETISI YANG ANDA CARI TIDAK TERDAFTAR "<<endl;
        getch();
    }
};



address_r findElemenrrelasiviaChild(List_r Lr, address_c P){
    address_r Q;
    address_r N;

    if(first(Lr) != NULL){
        Q = first(Lr);
        N = NULL;
        do{
            if(Q->adr_child == P){
                N = Q;
            }
            Q = next(Q);
        }while(Q != NULL);

        return N;
    }
    else{
        return NULL;
    }

}
address_r findElemenrrelasiviaParent(List_r Lr, address_p P){
    address_r Q;
    address_r N;

    if(first(Lr) != NULL){
        Q = first(Lr);
        N = NULL;
        do{
            if(Q->adr_parent == P){
                N = Q;
            }
            Q = next(Q);
        }while(Q != NULL);

        return N;
    }
    else{
        return NULL;
    }
}

